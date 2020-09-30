/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 11:07:24 by mboivin           #+#    #+#             */
/*   Updated: 2020/09/30 15:16:04 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function: Returns the necessary value for base conversion
*/

static int		conv_val(int n, int base)
{
	if (n % base < DEC_BASE)
		return ('0');
	return ('a' - DEC_BASE);
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

	if ((n == 0) || (base < BINARY_BASE) || (base > HEX_BASE))
		return (ft_strdup("0"));
	nbr = n;
	nbr_len = ft_nbrlen_base(nbr, base);
	sign = (n < 0) ? 1 : 0;
	if (n < 0)
		nbr_len++;
	if (!(result = ft_strnew(nbr_len)))
		return (NULL);
	if (n < 0)
	{
		result[0] = MINUS;
		nbr = -nbr;
	}
	while (nbr_len-- > sign)
	{
		result[nbr_len] = (nbr % base) + conv_val(nbr, base);
		nbr /= base;
	}
	return (result);
}
