/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 11:07:24 by mboivin           #+#    #+#             */
/*   Updated: 2020/04/12 20:24:09 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function: Returns the necessary value for base conversion
*/

static int		itoa_val(int n, int base)
{
	if (n % base < 10)
		return ('0');
	else
		return ('A' - 10);
	return (0);
}

/*
** Function: Converts an integer to a string representation using the specified
** base
**
** n: An integer
** base: An integer (2 to 16)
**
** returns: The converted number as a string representation
**          Zero value otherwise
*/

char			*ft_itoa_base(int n, int base)
{
	char		*result;
	long int	nbr;
	int			nbr_len;
	int			sign;

	if (base < 2 || base > 16)
		return (0);
	nbr = n;
	sign = 0;
	if (n < 0)
		nbr = -nbr;
	if (n < 0 && base == 10)
		sign = -1;
	nbr_len = ft_nbrlen_base(nbr, base);
	if (!(result = ft_strnew(nbr_len)))
		return (NULL);
	while (nbr_len-- > sign)
	{
		result[nbr_len] = (nbr % base) + itoa_val(nbr, base);
		nbr /= base;
	}
	return (result);
}
