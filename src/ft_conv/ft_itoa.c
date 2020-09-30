/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 11:07:24 by mboivin           #+#    #+#             */
/*   Updated: 2020/09/30 15:18:01 by mboivin          ###   ########.fr       */
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
	char		*result;
	long int	nbr;
	int			nbr_len;
	int			sign;

	nbr = n;
	nbr_len = ft_nbrlen(nbr);
	sign = (n < 0) ? 1 : 0;
	result = ft_strnew(nbr_len);
	if (!result)
		return (NULL);
	if (n < 0)
	{
		result[0] = MINUS;
		nbr = -nbr;
	}
	while (nbr_len-- > sign)
	{
		result[nbr_len] = nbr % DEC_BASE + ZERO;
		nbr /= DEC_BASE;
	}
	return (result);
}
