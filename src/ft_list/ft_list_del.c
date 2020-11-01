/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_del.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 19:46:51 by mboivin           #+#    #+#             */
/*   Updated: 2020/11/01 20:04:03 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_list.h"

/*
** This function deletes and frees the given node and its successors using the
** function del and free(3)
** Finally, the pointer to the list must be set to NULL
**
** node: Pointer to a node
** del: The adress of the function used to delete the content of the node
*/

void		ft_list_del(t_node **node, void (*del)(void *))
{
	t_node	*cursor;
	t_node	*next_node;

	if (!node || !del)
		return ;
	if (*node)
	{
		cursor = *node;
		while (cursor)
		{
			next_node = cursor->next;
			del(cursor->content);
			free(cursor);
			cursor = next_node;
		}
		*node = NULL;
	}
}
