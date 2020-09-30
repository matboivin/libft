/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 15:15:11 by mboivin           #+#    #+#             */
/*   Updated: 2020/09/30 15:21:17 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function: Outputs the integer n to given file descriptor
**
** n: The integer to output
** fd: The file descriptor on which to write
*/

void				ft_putnbr_fd(int n, int fd)
{
	unsigned int	nbr;

	nbr = n;
	if (n < 0)
	{
		ft_putchar_fd(MINUS, fd);
		nbr = -n;
	}
	if (nbr > 9)
	{
		ft_putnbr_fd((nbr / DEC_BASE), fd);
		ft_putnbr_fd((nbr % DEC_BASE), fd);
	}
	else
		ft_putchar_fd((nbr + ZERO), fd);
}
