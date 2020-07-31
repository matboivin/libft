/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 13:41:41 by mboivin           #+#    #+#             */
/*   Updated: 2020/07/31 23:39:57 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function: Swaps the value of two integers whose addresses are entered
** as parameters
*/

void		ft_swap(int *a, int *b)
{
	int		tmp;

	if ((a == NULL) || (b == NULL))
		return ;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
