/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 21:17:01 by mboivin           #+#    #+#             */
/*   Updated: 2020/11/01 20:06:22 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_list.h"

/*
** This function swaps the values of two list nodes
**
** a, b: Pointers to two nodes
** prev_a, prev_b: Pointers to two previous nodes
*/

void		ft_list_swap(t_node *prev_a, t_node *a, t_node *prev_b, t_node *b)
{
	t_node	*tmp;

	tmp = NULL;
	if (!a || !b || !prev_b)
		return ;
	if (prev_a)
		prev_a->next = b;
	if (prev_b)
		prev_b->next = a;
	tmp = a->next;
	a->next = b->next;
	b->next = tmp;
}