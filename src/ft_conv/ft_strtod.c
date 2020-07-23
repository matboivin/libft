/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtod.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:21:17 by mboivin           #+#    #+#             */
/*   Updated: 2020/07/23 21:02:57 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function: Returns the decimal part
*/

static double	decimal_val(const char *s, char **endptr)
{
	int			i;
	double		result;
	double		val;

	i = 0;
	result = 0.0;
	val = 0.1;
	while (s[i] && ft_isdigit(s[i]) == true)
	{
		result = result + (s[i] - '0') * val;
		val /= 10;
		i++;
	}
	*endptr = ft_strdup(s);
	return (result);
}

/*
** Recoded strtod libc function: Converts a string to a double
**
** s: The reference to an already allocated object of type char*, whose value is
** set by the function to the next character in s after the numerical value
**
** returns: The converted integral number as an int value
**          Zero value otherwise
*/

double			ft_strtod(const char *s, char **endptr)
{
	int			i;
	double		result;
	int			sign;

	i = 0;
	result = 0.0;
	while (ft_isspace(s[i]) == true)
		i++;
	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-')
		i++;
	while (s[i] && ft_isdigit(s[i]) == true)
	{
		result = (result * 10) + (s[i] - '0');
		i++;
	}
	if (s[i] == '.')
	{
		i++;
		result = result + decimal_val(s + i, endptr);
	}
	else
		*endptr = ft_strdup(s);
	return ((double)sign * result);
}
