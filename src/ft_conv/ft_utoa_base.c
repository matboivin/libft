/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 18:44:40 by mboivin           #+#    #+#             */
/*   Updated: 2020/09/10 22:17:37 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	int					n_len;
	unsigned long long	rem;

	if ((n == 0) || (base < 2) || (base > 16))
		return (ft_strdup("0"));
	n_len = ft_unbrlen_base(n, base);
	result = ft_strnew(n_len);
	if (!result)
		return (NULL);
	while (n != 0 && n_len-- > 0)
	{
		rem = n % base;
		result[n_len] = (rem < 10) ? rem + '0' : rem - 10 + 'a';
		n /= base;
	}
	return (result);
}
