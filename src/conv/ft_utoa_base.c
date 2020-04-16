/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 18:44:40 by mboivin           #+#    #+#             */
/*   Updated: 2020/04/16 19:52:43 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function: Returns the necessary value for base conversion
*/

static int				conv_val(int n, int base)
{
	if (n % base < 10)
		return ('0');
	else
		return ('A' - 10);
	return (0);
}

/*
** Function: Converts an unsigned integer to a string representation using the
** specified base
**
** n: An integer
** base: An integer (2 to 16)
**
** returns: The converted number as a string representation
**          Zero value otherwise
*/

char					*ft_utoa_base(unsigned long long n, int base)
{
	char				*result;
	unsigned long long	nbr;
	int					nbr_len;

	if (n == 0 || base < 2 || base > 16)
		return (ft_strdup("0"));
	nbr = n;
	nbr_len = ft_unbrlen_base(nbr, base);
	result = ft_strnew(nbr_len);
	if (result == NULL)
		return (NULL);
	while (nbr != 0 && nbr_len-- > 0)
	{
		result[nbr_len] = (nbr % base) + conv_val(nbr, base);
		nbr /= base;
	}
	return (result);
}
