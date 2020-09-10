/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/11 13:19:02 by mboivin           #+#    #+#             */
/*   Updated: 2020/09/10 23:05:41 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function: Handles type p and outputs s to the standard output
**
** s: A string representation of the formatted input
** spec: A structure containing the retrieved formatting data
**
** returns: The count of printed characters
*/

static int				ft_printf_ptr(char *s, t_spec *spec)
{
	int					printed;

	printed = 0;
	if (!(spec->flag & LEFTALIGN) && spec->width > (int)ft_strlen(s))
		printed += ft_put_padding(' ', ft_strlen(s), spec);
	if (spec->prec >= (int)ft_strlen(s))
	{
		printed += write(spec->dst_fd, s, 2);
		s += 2;
		printed += ft_put_zeroes(ft_strlen(s), spec);
	}
	printed += write(spec->dst_fd, s, ft_strlen(s));
	if (spec->flag & LEFTALIGN && spec->width > (int)ft_strlen(s))
		printed += ft_put_padding(' ', ft_strlen(s), spec);
	return (printed);
}

/*
** Function: Handles type p
**
** spec: A structure containing the retrieved formatting data
** ap: A pointer to the list of arguments
**
** returns: The count of printed characters
*/

int						ft_handle_ptr(t_spec *spec, va_list ap)
{
	int					printed;
	unsigned long long	arg;
	char				*buffer;

	printed = 0;
	arg = (unsigned long long)va_arg(ap, void *);
	buffer = ft_utoa_base(arg, 16);
	if (spec->prec == 0)
		buffer = ft_strdup(LOWHEX_PREFIX);
	else
		buffer = ft_add_prefix(buffer, spec);
	if (!buffer)
		return (-1);
	printed = ft_printf_ptr(buffer, spec);
	free(buffer);
	return (printed);
}
