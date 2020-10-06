/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:21:17 by mboivin           #+#    #+#             */
/*   Updated: 2020/10/06 23:08:33 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function returns the necessary value for base conversion
*/

static int		conv_val(int c)
{
	if (c >= '0' && c <= '9')
		return (c - ZERO);
	else if (c >= 'a' && c <= 'f')
		return (c - 'a' + DEC_BASE);
	else if (c >= 'A' && c <= 'F')
		return (c - 'A' + DEC_BASE);
	return (0);
}

/*
** This function checks if c is present in base
**
** c: A character
** base: The given base
**
** returns: true if c is present in base
**          false otherwise
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
** s: A string representation of a number
** base: An integer (2 to 16)
**
** returns: The converted number as an int value
**          0 otherwise
*/

int				ft_atoi_base(const char *s, int base)
{
	int			i;
	int			result;
	int			sign;

	if (base < BINARY_BASE || base > HEX_BASE)
		return (0);
	i = 0;
	result = 0;
	while (ft_isspace(s[i]))
		i++;
	sign = (s[i] == MINUS) ? -1 : 1;
	if ((s[i] == PLUS) || (s[i] == MINUS))
		i++;
	while (s[i] && ft_isbase(s[i], base))
	{
		result = (result * base) + conv_val(s[i]);
		i++;
	}
	return (sign * result);
}
