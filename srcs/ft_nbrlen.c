/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 13:46:03 by mboivin           #+#    #+#             */
/*   Updated: 2019/04/01 16:07:00 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function computes the length (count of digits) of the integer passed
** as an argument (e.g., length of 100 is 3, length of 42 is 2).
*/

size_t		ft_nbrlen(int n)
{
	size_t	i;

	i = 1;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	if (n == 0)
		i = 1;
	return (i);
}
