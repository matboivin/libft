/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 11:07:24 by mboivin           #+#    #+#             */
/*   Updated: 2020/10/23 23:37:02 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_define.h"
#include "libft_str.h"
#include "libft_num.h"
#include "libft_conv.h"

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
** This function converts an integer to a string representation
**
** n: An integer
**
** returns: The converted integral number as a string representation
**          0 otherwise
*/

char		*ft_itoa(int n)
{
	char	*result;
	int32_t	nbr;
	size_t	nbr_len;
	size_t	sign;
	bool	is_neg;

	is_neg = ft_is_neg(n, &nbr, &sign);
	nbr_len = ft_nbrlen(nbr);
	result = ft_strnew(nbr_len);
	if (!result)
		return (NULL);
	if (is_neg)
		result[0] = MINUS;
	while (nbr_len-- > sign)
	{
		result[nbr_len] = nbr % DEC_BASE + ZERO;
		nbr /= DEC_BASE;
	}
	return (result);
}
