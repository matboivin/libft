/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 11:07:24 by mboivin           #+#    #+#             */
/*   Updated: 2019/06/26 21:02:44 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function converts an integer value passed as an argument to a string
** representation.
*/

char			*ft_itoa(int n)
{
	long int	nb;
	size_t		len;
	size_t		sign;
	char		*str;

	nb = n;
	len = ft_nbrlen(nb);
	if (!(str = ft_strnew(len)))
		return (NULL);
	sign = 0;
	if (n < 0)
	{
		str[0] = '-';
		sign = 1;
		nb = -nb;
	}
	while (len-- > sign)
	{
		str[len] = nb % 10 + '0';
		nb /= 10;
	}
	return (str);
}
