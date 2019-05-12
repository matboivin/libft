/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 11:48:21 by mboivin           #+#    #+#             */
/*   Updated: 2019/05/12 12:53:19 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Recoded atoi libc function that converts a string to an integer.
** It takes a string argument which is supposed to be a representation of an
** integral number. It returns the converted integral number as an int value,
** else zero value is returned.
*/

int		ft_atoi(char const *str)
{
	size_t				i;
	unsigned long long	res;
	int					sign;

	i = 0;
	res = 0;
	sign = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + str[i] - '0';
		i++;
	}
	if (i > 19 || res >= 9223372036854775808ULL)
		return (sign == -1 ? 0 : -1);
	return ((int)(sign * res));
}
