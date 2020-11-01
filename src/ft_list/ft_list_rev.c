/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_rev.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 19:28:52 by mboivin           #+#    #+#             */
/*   Updated: 2020/11/01 20:05:56 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_list.h"

/*
** This function reverses the order of a list’s nodes
**
** head: Pointer to the first link of a list
*/

void		ft_list_rev(t_node **head)
{
	t_node	*cursor;
	t_node	*prev_node;
	t_node	*next_node;

	if (!head)
		return ;
	if (*head)
	{
		cursor = *head;
		prev_node = NULL;
		next_node = NULL;
		while (cursor->next)
		{
			next_node = cursor->next;
			cursor->next = prev_node;
			prev_node = cursor;
			cursor = next_node;
		}
		*head = prev_node;
	}
}
