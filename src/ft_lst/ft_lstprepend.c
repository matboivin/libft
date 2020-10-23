/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprepend.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 16:36:30 by mboivin           #+#    #+#             */
/*   Updated: 2020/10/23 23:44:14 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_list.h"

/*
** This function prepends the new node to the list
**
** head: The address of a pointer to the first node of a list
** new_node: The address of a pointer to the node to add to the list
*/

void		ft_lstprepend(t_node **head, t_node *new_node)
{
	if (head && new_node)
	{
		new_node->next = *head;
		*head = new_node;
	}
}
