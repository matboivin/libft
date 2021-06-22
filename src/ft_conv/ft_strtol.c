/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtol.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 22:17:41 by mboivin           #+#    #+#             */
/*   Updated: 2021/06/22 20:24:34 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_define.h"
#include "libft_ctype.h"
#include "libft_str.h"
#include "libft_conv.h"

/*
** Recoded strtol libc function: Converts a string to a long
**
** s: The reference to an already allocated object of type char*, whose value is
** set by the function to the next character in s after the numerical value
**
** returns: The converted integral number as an int value
**          0 otherwise
*/

long	ft_strtol(const char *s, char **endptr)
{
	int		i;
	long	result;
	long	sign;

	i = 0;
	result = 0;
	sign = 1;
	while (ft_isspace(s[i]))
		i++;
	if (s[i] == '-' && ft_isdigit(s[i + 1]))
		sign = -1;
	if ((s[i] == '+') || (s[i] == '-'))
		i++;
	while (s[i] && ft_isdigit(s[i]))
	{
		result = (result * DEC_BASE) + (s[i] - ZERO);
		i++;
	}
	*endptr = (char *)s + i;
	return (sign * result);
}
