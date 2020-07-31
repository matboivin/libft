/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:21:17 by mboivin           #+#    #+#             */
/*   Updated: 2020/07/31 23:55:35 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Recoded atoi libc function: Converts a string to an integer
**
** s: A string representation of an integral number
**
** returns: The converted integral number as an int value
**          Zero value otherwise
*/

int				ft_atoi(const char *s)
{
	int			i;
	int			result;
	int			sign;

	i = 0;
	result = 0;
	while (ft_isspace(s[i]) == true)
		i++;
	sign = (s[i] == '-') ? -1 : 1;
	if ((s[i] == '+') || (s[i] == '-'))
		i++;
	while (s[i] && (ft_isdigit(s[i]) == true))
	{
		result = (result * 10) + (s[i] - '0');
		i++;
	}
	return (sign * result);
}
