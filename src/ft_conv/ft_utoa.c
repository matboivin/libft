/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 18:35:51 by mboivin           #+#    #+#             */
/*   Updated: 2020/09/30 15:20:06 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function: Converts an unsigned integer to a string representation
**
** n: An integer
**
** returns: The converted number as a string representation
**          Zero value otherwise
*/

char					*ft_utoa(unsigned long long n)
{
	char				*result;
	unsigned long long	nbr;
	int					nbr_len;

	if (n == 0)
		return (ft_strdup("0"));
	nbr = n;
	nbr_len = ft_unbrlen_base(nbr, DEC_BASE);
	result = ft_strnew(nbr_len);
	if (!result)
		return (NULL);
	while (nbr != 0 && nbr_len-- > 0)
	{
		result[nbr_len] = nbr % DEC_BASE + ZERO;
		nbr /= DEC_BASE;
	}
	return (result);
}
