/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 18:44:40 by mboivin           #+#    #+#             */
/*   Updated: 2020/10/09 17:17:48 by mboivin          ###   ########.fr       */
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

char		*ft_utoa_base(int64_t n, int base)
{
	char	*result;
	size_t	n_len;
	int64_t	rem;

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
