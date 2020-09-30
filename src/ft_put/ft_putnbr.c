/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 10:45:41 by mboivin           #+#    #+#             */
/*   Updated: 2020/09/30 15:21:21 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function: Outputs the integer n to the standard output
**
** n: The integer to output
*/

void				ft_putnbr(int n)
{
	unsigned int	nbr;

	nbr = n;
	if (n < 0)
	{
		ft_putchar(MINUS);
		nbr = -n;
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / DEC_BASE);
		ft_putnbr(nbr % DEC_BASE);
	}
	else
		ft_putchar(nbr + ZERO);
}
