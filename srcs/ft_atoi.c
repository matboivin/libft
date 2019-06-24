/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 11:48:21 by mboivin           #+#    #+#             */
/*   Updated: 2019/06/23 23:57:44 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Recoded atoi libc function that converts a string to an integer.
** It takes a string argument which is supposed to be a representation of an
** integral number. It returns the converted integral number as an int value,
** else zero value is returned.
*/

int						ft_atoi(char const *str)
{
	unsigned long int	res;
	int					sign;

	res = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str && ft_isdigit(*str))
	{
		if (res >= 9223372036854775807)
			return (sign == 1 ? -1 : 0);
		res = (res * 10) + (*str - '0');
		str++;
	}
	return ((int)(sign * res));
}
