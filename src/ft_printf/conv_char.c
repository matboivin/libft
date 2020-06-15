/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_char.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/11 13:19:02 by mboivin           #+#    #+#             */
/*   Updated: 2020/06/15 14:39:23 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function: Handles type c
**
** spec: A structure containing the retrieved formatting data
** ap: A pointer to the list of arguments
**
** returns: The count of printed characters
*/

int			conv_c(t_spec *spec, va_list ap)
{
	int		printed;
	char	c;
	char	*buffer;

	c = va_arg(ap, int);
	if (spec->modifier == 'l')
		buffer = ft_atos((wchar_t)c);
	else
		buffer = ft_atos(c);
	if (buffer == NULL)
		return (-1);
	printed = format_char(buffer, spec);
	free(buffer);
	return (printed);
}
