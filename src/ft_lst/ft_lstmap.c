/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 16:38:13 by mboivin           #+#    #+#             */
/*   Updated: 2020/10/23 23:44:01 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_list.h"

/*
** This function iterates the list from node and applies the function f to the
** content of each node
** Creates a new list resulting of the successive applications of the function f
** The del function is here to delete the content of a node if needed
**
** node: Pointer to a node
** f: The address of the function to iterate on the list
** del: The address of the function to delete the content
**
** returns: The new list
**          NULL otherwise
*/

t_node		*ft_lstmap(t_node *node, void *(*f)(void *), void (*del)(void *))
{
	t_node	*cursor;
	t_node	*new_lst;
	t_node	*result;

	if (!node || !f || !del)
		return (NULL);
	cursor = node;
	if (!(new_lst = ft_lstnew(f(cursor->content))))
		return (NULL);
	result = new_lst;
	cursor = cursor->next;
	while (cursor)
	{
		if (!(new_lst->next = ft_lstnew(f(cursor->content))))
		{
			del(new_lst->content);
			return (NULL);
		}
		new_lst = new_lst->next;
		cursor = cursor->next;
	}
	return (result);
}
