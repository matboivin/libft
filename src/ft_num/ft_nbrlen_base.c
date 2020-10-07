/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 13:46:03 by mboivin           #+#    #+#             */
/*   Updated: 2020/10/07 22:37:24 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function computes the length (count of digits) of the integer passed
** as an argument using the specified base
*/

int			ft_nbrlen_base(int n, int base)
{
	int		len;

	if (n == 0)
		return (1);
	len = 0;
	if (n < 0 && base == DEC_BASE)
		len++;
	while (n != 0)
	{
		n /= base;
		len++;
	}
	return (len);
}
