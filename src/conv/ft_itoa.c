/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 11:07:24 by mboivin           #+#    #+#             */
/*   Updated: 2019/11/20 17:56:42 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function: Converts an integer to a string representation
**
** n: An integer
**
** returns: The converted integral number as a string representation
**          Zero value otherwise
*/

char			*ft_itoa(int n)
{
	long int	nbr;
	size_t		nbr_len;
	size_t		sign;
	char		*str_repr;

	nbr = n;
	nbr_len = ft_nbrlen(nbr);
	if (!(str_repr = ft_strnew(nbr_len)))
		return (NULL);
	sign = 0;
	if (n < 0)
	{
		str_repr[0] = '-';
		sign = 1;
		nbr = -nbr;
	}
	while (nbr_len-- > sign)
	{
		str_repr[nbr_len] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (str_repr);
}
