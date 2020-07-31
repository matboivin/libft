/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 21:17:01 by mboivin           #+#    #+#             */
/*   Updated: 2020/07/31 23:38:57 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** function: Swaps the values of two list elements
**
** a, b: The adresses of pointers to two elements
** prev_a, prev_b: The adresses of pointers to two previous elements
*/

void		ft_lstswap(t_list *a, t_list *prev_a, t_list *b, t_list *prev_b)
{
	t_list	*tmp;

	tmp = NULL;
	if ((a == NULL) || (b == NULL) || (prev_a == NULL) || (prev_b == NULL))
		return ;
	if (prev_a)
		prev_a->next = b;
	if (prev_b)
		prev_b->next = a;
	tmp = a->next;
	a->next = b->next;
	b->next = tmp;
}
