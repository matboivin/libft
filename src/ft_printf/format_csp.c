/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_csp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/11 13:19:53 by mboivin           #+#    #+#             */
/*   Updated: 2020/04/26 22:22:43 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function: Handles type c and outputs s to the standard output
**
** s: A string representation of the formatted input
** spec: A structure containing the retrieved formatting data
**
** returns: The count of printed characters
*/

int			format_char(char *s, t_spec *spec)
{
	int		printed;
	int		pad;

	printed = 0;
	pad = ' ';
	if (!(spec->flag & leftalign) && spec->width > 1)
	{
		if (s[0] == '%' && spec->flag & zero)
			pad = '0';
		printed += put_padding(pad, 1, spec);
	}
	printed += write(STDOUT_FILENO, s, 1);
	if (spec->flag & leftalign && spec->width > 1)
		printed += put_padding(pad, 1, spec);
	return (printed);
}

/*
** Function: Handles type s and outputs s to the standard output
**
** s: A string representation of the formatted input
** spec: A structure containing the retrieved formatting data
**
** returns: The count of printed characters
*/

int			format_str(char *s, t_spec *spec)
{
	int		printed;
	int		len;
	int		pad;

	printed = 0;
	len = ft_strlen(s);
	pad = ' ';
	if (!(spec->flag & leftalign) && spec->width > (int)ft_strlen(s))
	{
		if (spec->flag & zero)
			pad = '0';
		printed += put_padding(pad, len, spec);
	}
	printed += write(STDOUT_FILENO, s, len);
	if (spec->flag & leftalign && spec->width > (int)ft_strlen(s))
		printed += put_padding(' ', len, spec);
	return (printed);
}

/*
** Function: Handles type p and outputs s to the standard output
**
** s: A string representation of the formatted input
** spec: A structure containing the retrieved formatting data
**
** returns: The count of printed characters
*/

int			format_ptr(char *s, t_spec *spec)
{
	int		printed;

	printed = 0;
	if (!(spec->flag & leftalign) && spec->width > (int)ft_strlen(s))
		printed += put_padding(' ', ft_strlen(s), spec);
	if (spec->prec >= (int)ft_strlen(s))
	{
		printed += write(STDOUT_FILENO, s, 2);
		s += 2;
		printed += put_zeroes(ft_strlen(s), spec);
	}
	printed += write(STDOUT_FILENO, s, ft_strlen(s));
	if (spec->flag & leftalign && spec->width > (int)ft_strlen(s))
		printed += put_padding(' ', ft_strlen(s), spec);
	return (printed);
}
