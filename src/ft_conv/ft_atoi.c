/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:21:17 by mboivin           #+#    #+#             */
/*   Updated: 2021/04/15 18:39:42 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_define.h"
#include "libft_ctype.h"
#include "libft_conv.h"

/*
** Recoded atoi libc function: Converts a string to an integer
**
** s: A string representation of an integral number
**
** returns: The converted integral number as an int value
**          0 otherwise
*/

int	ft_atoi(const char *s)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*s && ft_isspace(*s))
		s++;
	if (*s == '-')
		sign = -1;
	if ((*s == '+') || (*s == '-'))
		s++;
	while (*s && ft_isdigit(*s))
		result = (result * DEC_BASE) + (*(s++) - ZERO);
	return (sign * result);
}
