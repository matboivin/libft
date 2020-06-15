/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_csp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/11 13:19:53 by mboivin           #+#    #+#             */
/*   Updated: 2020/06/15 14:47:59 by mboivin          ###   ########.fr       */
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
	if (!(spec->flag & LEFTALIGN) && spec->width > 1)
	{
		if (s[0] == '%' && spec->flag & ZERO)
			pad = '0';
		printed += put_padding(pad, 1, spec);
	}
	printed += write(spec->dst_fd, s, 1);
	if (spec->flag & LEFTALIGN && spec->width > 1)
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
	if (!(spec->flag & LEFTALIGN) && spec->width > (int)ft_strlen(s))
	{
		if (spec->flag & ZERO)
			pad = '0';
		printed += put_padding(pad, len, spec);
	}
	printed += write(spec->dst_fd, s, len);
	if (spec->flag & LEFTALIGN && spec->width > (int)ft_strlen(s))
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
	if (!(spec->flag & LEFTALIGN) && spec->width > (int)ft_strlen(s))
		printed += put_padding(' ', ft_strlen(s), spec);
	if (spec->prec >= (int)ft_strlen(s))
	{
		printed += write(spec->dst_fd, s, 2);
		s += 2;
		printed += put_zeroes(ft_strlen(s), spec);
	}
	printed += write(spec->dst_fd, s, ft_strlen(s));
	if (spec->flag & LEFTALIGN && spec->width > (int)ft_strlen(s))
		printed += put_padding(' ', ft_strlen(s), spec);
	return (printed);
}
