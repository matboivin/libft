/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 13:46:03 by mboivin           #+#    #+#             */
/*   Updated: 2020/09/30 15:20:32 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function computes the length (count of digits) of the integer passed
** as an argument (e.g., length of 100 is 3, length of 42 is 2).
*/

int			ft_nbrlen(int n)
{
	int		len;

	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
		len++;
	while (n != 0)
	{
		n /= DEC_BASE;
		len++;
	}
	return (len);
}
