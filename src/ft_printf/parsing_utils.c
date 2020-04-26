/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 21:18:36 by mboivin           #+#    #+#             */
/*   Updated: 2020/04/26 22:10:45 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function: Inits the spec data structure
*/

void		create_spec(t_spec *spec)
{
	spec->flag = 0;
	spec->prec = -1;
	spec->width = 0;
	spec->modifier = 0;
	spec->type = '\0';
}

/*
** Function: Retrieves the corresponding argument to fill a specifier field
**
** ap: A pointer to the list of arguments
**
** returns: The argument
*/

int			get_arg(va_list ap)
{
	int		field;

	field = va_arg(ap, int);
	return (field);
}

/*
** Function: Retrieves the digits to fill a specifier field
**
** format: The formatting string
**
** returns: The digits
*/

int			get_digits(const char *format)
{
	int		field;

	field = ft_atoi(format);
	return (field);
}
