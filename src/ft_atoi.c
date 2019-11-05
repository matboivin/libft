/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:21:17 by mboivin           #+#    #+#             */
/*   Updated: 2019/11/05 19:47:16 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Recoded atoi libc function: converts a string to an integer
**
** str: representation of an integral number
**
** returns: the converted integral number as an int value
**          zero value otherwise
*/

int				ft_atoi(char const *str)
{
	long long	res;
	int			sign;

	res = 0;
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
		if (res >= LLONG_MAX)
			return (sign == 1 ? -1 : 0);
		res = (res * 10) + (*str - '0');
		str++;
	}
	return ((int)sign * res);
}
