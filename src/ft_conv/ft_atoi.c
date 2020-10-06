/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:21:17 by mboivin           #+#    #+#             */
/*   Updated: 2020/10/06 23:08:33 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Recoded atoi libc function: Converts a string to an integer
**
** s: A string representation of an integral number
**
** returns: The converted integral number as an int value
**          0 otherwise
*/

int				ft_atoi(const char *s)
{
	int			i;
	int			result;
	int			sign;

	i = 0;
	result = 0;
	while (ft_isspace(s[i]))
		i++;
	sign = (s[i] == MINUS) ? -1 : 1;
	if ((s[i] == PLUS) || (s[i] == MINUS))
		i++;
	while (s[i] && ft_isdigit(s[i]))
	{
		result = (result * DEC_BASE) + (s[i] - ZERO);
		i++;
	}
	return (sign * result);
}
