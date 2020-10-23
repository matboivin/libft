/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 19:41:33 by mboivin           #+#    #+#             */
/*   Updated: 2020/10/23 23:42:45 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_list.h"

/*
** This function appends a new node to the list
**
** head: Pointer to the first node of a list
** new_node: Pointer to the node to add to the list
*/

void		ft_lstappend(t_node **head, t_node *new_node)
{
	t_node	*cursor;

	if (!head || !new_node)
		return ;
	if (*head)
	{
		cursor = *head;
		while (cursor->next)
			cursor = cursor->next;
		cursor->next = new_node;
	}
	else
		*head = new_node;
}
