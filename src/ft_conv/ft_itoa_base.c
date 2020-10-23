/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 11:07:24 by mboivin           #+#    #+#             */
/*   Updated: 2020/10/23 23:37:11 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_define.h"
#include "libft_str.h"
#include "libft_num.h"
#include "libft_conv.h"

/*
** This function returns the necessary value for base conversion
*/

static int	conv_val(int n, int base)
{
	if (n % base < DEC_BASE)
		return ('0');
	return ('a' - DEC_BASE);
}

/*
** This function checks whether n is negative
*/

static bool	ft_is_neg(int n, int32_t *nbr, size_t *sign)
{
	*sign = 0;
	*nbr = n;
	if (n < 0)
	{
		*sign = 1;
		*nbr *= -1;
		return (true);
	}
	return (false);
}

/*
** This function converts an integer to a string representation using
** the specified base
**
** n: An integer
** base: An integer (2 to 16)
**
** returns: The converted number as a string representation
**          0 otherwise
*/

char		*ft_itoa_base(int n, int base)
{
	char	*result;
	int32_t	nbr;
	size_t	nbr_len;
	size_t	sign;
	bool	is_neg;

	if ((n == 0) || (base < BINARY_BASE) || (base > HEX_BASE))
		return (ft_strdup("0"));
	is_neg = ft_is_neg(n, &nbr, &sign);
	nbr_len = ft_nbrlen_base(nbr, base);
	result = ft_strnew(nbr_len);
	if (!result)
		return (NULL);
	if (is_neg && base == DEC_BASE)
		result[0] = MINUS;
	while (nbr_len-- > sign)
	{
		result[nbr_len] = (nbr % base) + conv_val(nbr, base);
		nbr /= base;
	}
	return (result);
}
