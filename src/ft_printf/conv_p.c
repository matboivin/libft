/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/11 13:19:02 by mboivin           #+#    #+#             */
/*   Updated: 2020/06/15 14:39:23 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function: Handles type p
**
** spec: A structure containing the retrieved formatting data
** ap: A pointer to the list of arguments
**
** returns: The count of printed characters
*/

int						conv_p(t_spec *spec, va_list ap)
{
	int					printed;
	unsigned long long	arg;
	char				*buffer;

	printed = 0;
	arg = (unsigned long long)va_arg(ap, void *);
	buffer = ft_utoa_base(arg, 16);
	if (spec->prec == 0)
		buffer = ft_strdup("0x");
	else
		buffer = add_prefix(buffer, spec);
	if (buffer == NULL)
		return (-1);
	printed = format_ptr(buffer, spec);
	free(buffer);
	return (printed);
}
