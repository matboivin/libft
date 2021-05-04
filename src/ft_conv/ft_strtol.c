/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtol.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 22:17:41 by mboivin           #+#    #+#             */
/*   Updated: 2021/05/04 22:52:29 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_define.h"
#include "libft_ctype.h"
#include "libft_str.h"
#include "libft_conv.h"

/*
** This function returns the decimal part
*/

static long	decimal_val(const char *s, int *i)
{
	long	result;
	long	val;

	result = 0.0;
	val = 0.1;
	(*i)++;
	while (s[*i] && ft_isdigit(s[*i]))
	{
		result = result + (s[*i] - ZERO) * val;
		val /= DEC_BASE;
		(*i)++;
	}
	return (result);
}

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
	int		sign;

	i = 0;
	result = 0.0;
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
	if (s[i] == DOT)
		result = result + decimal_val(s, &i);
	*endptr = (char *)s + i;
	return ((long)sign * result);
}
