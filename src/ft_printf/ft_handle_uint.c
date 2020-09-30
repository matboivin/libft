/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_uint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/11 13:19:02 by mboivin           #+#    #+#             */
/*   Updated: 2020/09/30 15:12:40 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function: Retrieves the argument using the specified length
**
** spec: A structure containing the retrieved formatting data
** ap: A pointer to the list of arguments
**
** returns: The argument
*/

static uintmax_t	length_uint(t_spec *spec, va_list ap)
{
	if (spec->modifier == 0)
		return (va_arg(ap, unsigned int));
	else if (spec->modifier == 'h' + 'h')
		return ((unsigned char)va_arg(ap, int));
	else if (spec->modifier == 'h')
		return ((unsigned short)va_arg(ap, int));
	else if (spec->modifier == 'l')
		return (va_arg(ap, unsigned long));
	else if (spec->modifier == 'l' + 'l')
		return (va_arg(ap, unsigned long long));
	return (0);
}

/*
** Function: Handles type u
**
** spec: A structure containing the retrieved formatting data
** ap: A pointer to the list of arguments
**
** returns: The count of printed characters
*/

int					ft_handle_uint(t_spec *spec, va_list ap)
{
	int				printed;
	uintmax_t		arg;
	char			*buffer;

	arg = length_uint(spec, ap);
	buffer = ft_utoa_base(arg, DEC_BASE);
	if (!buffer)
		return (-1);
	printed = ft_printf_nbr(buffer, spec, arg);
	free(buffer);
	return (printed);
}

/*
** Function: Handle type o
**
** spec: A structure containing the retrieved formatting data
** ap: A pointer to the list of arguments
**
** returns: The count of printed characters
*/

int					ft_handle_oct(t_spec *spec, va_list ap)
{
	int				printed;
	uintmax_t		arg;
	char			*buffer;

	arg = length_uint(spec, ap);
	buffer = ft_utoa_base(arg, OCT_BASE);
	if (spec->flag & ALT_FORM)
		buffer = ft_add_prefix(buffer, spec);
	if (!buffer)
		return (-1);
	printed = ft_printf_nbr(buffer, spec, arg);
	free(buffer);
	return (printed);
}

/*
** Function: Handle types x and X
**
** spec: A structure containing the retrieved formatting data
** ap: A pointer to the list of arguments
**
** returns: The count of printed characters
*/

int					ft_handle_hex(t_spec *spec, va_list ap)
{
	int				printed;
	uintmax_t		arg;
	char			*buffer;

	arg = length_uint(spec, ap);
	buffer = ft_utoa_base(arg, HEX_BASE);
	if (spec->type == 'X')
		buffer = ft_strupcase(buffer);
	if (spec->flag & ALT_FORM)
		buffer = ft_add_prefix(buffer, spec);
	if (!buffer)
		return (-1);
	printed = ft_printf_nbr(buffer, spec, arg);
	free(buffer);
	return (printed);
}
