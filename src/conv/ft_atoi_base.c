/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:21:17 by mboivin           #+#    #+#             */
/*   Updated: 2020/04/12 20:24:28 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function: Returns the necessary value for base conversion
*/

static int		atoi_val(int c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	else if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	else if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	return (0);
}

/*
** Function: Checks if c is present in base
**
** c: A character
** base: The given base
**
** returns: A non-zero integer if c is present in base
**          Zero value otherwise
*/

static bool		ft_isbase(int c, int base)
{
	const char	*lower_hex = "0123456789abcdef";
	const char	*upper_hex = "0123456789ABCDEF";
	int			i;

	i = 0;
	while (i < base)
	{
		if ((lower_hex[i] == c) || (upper_hex[i] == c))
			return (true);
		i++;
	}
	return (false);
}

/*
** Recoded atoi libc function: Converts a string to an integer (base 10)
**
** str: A string representation of a number
** base: An integer (2 to 16)
**
** returns: The converted number as an int value
**          Zero value otherwise
*/

int				ft_atoi_base(const char *str, int base)
{
	int			result;
	int			sign;

	if (base < 2 || base > 16)
		return (0);
	result = 0;
	sign = 1;
	while (ft_isspace(*str) == true)
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str && ft_isbase(*str, base) == true)
	{
		result = (result * base) + atoi_val(*str);
		str++;
	}
	return (sign * result);
}
