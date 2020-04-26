/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_percent.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/11 13:19:02 by mboivin           #+#    #+#             */
/*   Updated: 2020/04/26 22:10:17 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function: Handles percent character
**
** spec: A structure containing the retrieved formatting data
** ap: A pointer to the list of arguments
**
** returns: The count of printed characters
*/

int			conv_percent(t_spec *spec, va_list ap)
{
	int		printed;
	char	*buffer;

	(void)ap;
	buffer = ft_strdup("%");
	if (buffer == NULL)
		return (-1);
	printed = format_char(buffer, spec);
	free(buffer);
	return (printed);
}
