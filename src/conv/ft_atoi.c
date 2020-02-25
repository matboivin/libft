/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:21:17 by mboivin           #+#    #+#             */
/*   Updated: 2019/11/20 17:54:21 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Recoded atoi libc function: Converts a string to an integer
**
** str: A string representation of an integral number
**
** returns: The converted integral number as an int value
**          Zero value otherwise
*/

int				ft_atoi(char const *str)
{
	long long	result;
	int			sign;

	result = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str && ft_isdigit(*str))
	{
		if (result >= LLONG_MAX)
			return (sign == 1 ? -1 : 0);
		result = (result * 10) + (*str - '0');
		str++;
	}
	return ((int)sign * result);
}
