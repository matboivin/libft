/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 18:44:40 by mboivin           #+#    #+#             */
/*   Updated: 2020/10/06 23:08:33 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function converts an unsigned integer to a string representation using
** the specified base
**
** n: An integer
** base: An integer (2 to 16)
**
** returns: The converted number as a string representation
**          0 otherwise
*/

char					*ft_utoa_base(unsigned long long n, int base)
{
	char				*result;
	int					n_len;
	unsigned long long	rem;

	if ((n == 0) || (base < BINARY_BASE) || (base > HEX_BASE))
		return (ft_strdup("0"));
	n_len = ft_unbrlen_base(n, base);
	result = ft_strnew(n_len);
	if (!result)
		return (NULL);
	while (n != 0 && n_len-- > 0)
	{
		rem = n % base;
		result[n_len] = (rem < DEC_BASE) ? rem + ZERO : rem - DEC_BASE + 'a';
		n /= base;
	}
	return (result);
}
