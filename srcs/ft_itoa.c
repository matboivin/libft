/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 11:07:24 by mboivin           #+#    #+#             */
/*   Updated: 2018/11/26 10:25:16 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function converts an integer value passed as an argument to a string
** representation.
*/

char	*ft_itoa(int n)
{
	unsigned int	nb;
	size_t			len;
	char			*ptr;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	nb = n;
	len = ft_nbrlen(nb);
	if (!(ptr = (char *)malloc(sizeof(ptr) * len + 1)))
		return (NULL);
	ptr[len] = '\0';
	len--;
	ptr[0] = (n < 0 ? '-' : '0');
	if (n < 0)
		nb *= -1;
	while (len > (n < 0 ? 1 : 0) && nb > 9)
	{
		ptr[len--] = nb % 10 + '0';
		nb /= 10;
	}
	if (nb < 10)
		ptr[len] = nb + '0';
	return (ptr);
}
