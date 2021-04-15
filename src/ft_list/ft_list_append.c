/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_append.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 19:41:33 by mboivin           #+#    #+#             */
/*   Updated: 2021/04/15 18:45:17 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_list.h"

/*
** This function appends a new node to the list
**
** head: Pointer to the first node of a list
** new_node: Pointer to the node to add to the list
*/

void	ft_list_append(t_node **head, t_node *new_node)
{
	t_node	*cursor;

	cursor = NULL;
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
