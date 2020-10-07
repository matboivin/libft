/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 11:07:24 by mboivin           #+#    #+#             */
/*   Updated: 2020/10/07 22:42:31 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function converts an integer to a string representation
**
** n: An integer
**
** returns: The converted integral number as a string representation
**          0 otherwise
*/

char			*ft_itoa(int n)
{
	char		*result;
	long int	nbr;
	int			nbr_len;
	int			sign;

	sign = 0;
	nbr = n;
	nbr_len = ft_nbrlen(nbr);
	result = ft_strnew(nbr_len);
	if (!result)
		return (NULL);
	if (n < 0)
	{
		sign = 1;
		nbr = -nbr;
		result[0] = MINUS;
	}
	while (nbr_len-- > sign)
	{
		result[nbr_len] = nbr % DEC_BASE + ZERO;
		nbr /= DEC_BASE;
	}
	return (result);
}
