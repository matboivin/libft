/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_digits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 21:18:36 by mboivin           #+#    #+#             */
/*   Updated: 2021/01/02 21:56:45 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_printf.h"

/*
** Function: Retrieves the digits to fill a specifier field
**
** format: The formatting string
**
** returns: The digits
*/

int	get_digits(const char *format)
{
	int	field;

	field = ft_atoi(format);
	return (field);
}
