/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_nbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/11 13:19:53 by mboivin           #+#    #+#             */
/*   Updated: 2020/06/15 15:08:41 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function: Handles numbers and outputs s to the standard output
**
** pad: The pad character (either space or 0)
** len: The size of the output string
** s: A string representation of the formatted input
** spec: A structure containing the retrieved formatting data
**
** returns: The count of printed characters
*/

int			format_int(char *s, int pad, int len, t_spec *spec)
{
	int		printed;
	int		zeroes;

	printed = 0;
	zeroes = ft_strlen(s);
	if (spec->prec >= (int)ft_strlen(s) && is_prefix(s[0]))
	{
		spec->width--;
		zeroes--;
	}
	if (spec->flag & ZERO && spec->prec == -1 && is_prefix(s[0]))
		printed += write(spec->dst_fd, s++, 1);
	if (!(spec->flag & LEFTALIGN) && spec->width > (int)ft_strlen(s))
		printed += put_padding(pad, len, spec);
	if (spec->prec >= (int)ft_strlen(s))
	{
		if (is_prefix(s[0]))
			printed += write(spec->dst_fd, s++, 1);
		printed += put_zeroes(zeroes, spec);
	}
	printed += write(spec->dst_fd, s, ft_strlen(s));
	if (spec->flag & LEFTALIGN && spec->width > (int)ft_strlen(s))
		printed += put_padding(pad, len, spec);
	return (printed);
}

/*
** Function: Handles zero with precision 0 and outputs s to the standard output
**
** s: A string representation of the formatted input
** spec: A structure containing the retrieved formatting data
**
** returns: The count of printed characters
*/

int			format_zero(char *s, t_spec *spec)
{
	int		printed;
	int		len;

	printed = 0;
	len = 0;
	if (is_prefix(s[0]))
		spec->width--;
	if (!(spec->flag & LEFTALIGN) && spec->width >= (int)ft_strlen(s))
		printed += put_padding(' ', len, spec);
	if (is_prefix(s[0]))
		printed += write(spec->dst_fd, s, 1);
	if (spec->flag & LEFTALIGN && spec->width >= (int)ft_strlen(s))
		printed += put_padding(' ', len, spec);
	return (printed);
}

/*
** Function: Handles types diouxX to outputs s
**
** s: A string representation of the formatted input
** spec: A structure containing the retrieved formatting data
** arg: The int argument
**
** returns: The count of printed characters
*/

int			format_nbr(char *s, t_spec *spec, int arg)
{
	int		printed;
	int		len;
	int		pad;

	printed = 0;
	len = (spec->prec >= (int)ft_strlen(s)) ? spec->prec : (int)ft_strlen(s);
	pad = (spec->flag & ZERO && spec->prec == -1 \
		&& !(spec->flag & LEFTALIGN)) ? '0' : ' ';
	if (spec->prec == 0 && arg == 0)
		printed += format_zero(s, spec);
	else
		printed += format_int(s, pad, len, spec);
	return (printed);
}
