/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_uint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/11 13:19:02 by mboivin           #+#    #+#             */
/*   Updated: 2020/06/13 16:55:35 by mboivin          ###   ########.fr       */
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

uintmax_t		length_uint(t_spec *spec, va_list ap)
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

int				conv_uint(t_spec *spec, va_list ap)
{
	int			printed;
	uintmax_t	arg;
	char		*buffer;

	arg = length_uint(spec, ap);
	buffer = ft_utoa_base(arg, 10);
	if (buffer == NULL)
		return (-1);
	printed = format_nbr(buffer, spec, arg);
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

int				conv_o(t_spec *spec, va_list ap)
{
	int			printed;
	uintmax_t	arg;
	char		*buffer;

	arg = length_uint(spec, ap);
	buffer = ft_utoa_base(arg, 8);
	if (spec->flag & ALT)
		buffer = add_prefix(buffer, spec);
	if (buffer == NULL)
		return (-1);
	printed = format_nbr(buffer, spec, arg);
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

int				conv_hex(t_spec *spec, va_list ap)
{
	int			printed;
	uintmax_t	arg;
	char		*buffer;

	arg = length_uint(spec, ap);
	buffer = ft_utoa_base(arg, 16);
	if (spec->type == 'X')
		buffer = ft_strupcase(buffer);
	if (spec->flag & ALT)
		buffer = add_prefix(buffer, spec);
	if (buffer == NULL)
		return (-1);
	printed = format_nbr(buffer, spec, arg);
	free(buffer);
	return (printed);
}
