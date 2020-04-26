/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_int.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/11 13:19:02 by mboivin           #+#    #+#             */
/*   Updated: 2020/04/26 22:10:11 by mboivin          ###   ########.fr       */
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

intmax_t		length_int(t_spec *spec, va_list ap)
{
	if (spec->modifier == 0)
		return (va_arg(ap, int));
	else if (spec->modifier == 'h' + 'h')
		return ((char)va_arg(ap, int));
	else if (spec->modifier == 'h')
		return ((short)va_arg(ap, int));
	else if (spec->modifier == 'l')
		return (va_arg(ap, long));
	else if (spec->modifier == 'l' + 'l')
		return (va_arg(ap, long long));
	return (0);
}

/*
** Function: Handles types d and i
**
** spec: A structure containing the retrieved formatting data
** ap: A pointer to the list of arguments
**
** returns: The count of printed characters
*/

int				conv_int(t_spec *spec, va_list ap)
{
	int			printed;
	intmax_t	arg;
	char		*buffer;

	arg = length_int(spec, ap);
	buffer = ft_itoa_base(arg, 10);
	if (arg >= 0 && (spec->flag & plus || spec->flag & space))
		buffer = add_prefix(buffer, spec);
	if (buffer == NULL)
		return (-1);
	printed = format_nbr(buffer, spec, arg);
	free(buffer);
	return (printed);
}
