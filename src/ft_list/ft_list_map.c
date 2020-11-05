/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 16:38:13 by mboivin           #+#    #+#             */
/*   Updated: 2020/11/05 17:47:29 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_list.h"

/*
** This function iterates the list from node and applies the function f to the
** content of each node
** Creates a new list resulting of the successive applications of the function f
**
** node: Pointer to a node
** f: The address of the function to iterate on the list
**
** returns: The new list
**          NULL otherwise
*/

t_node		*ft_list_map(t_node *node, void *(*f)(void *))
{
	t_node	*cursor;
	t_node	*new_lst;
	t_node	*result;

	if (!node || !f)
		return (NULL);
	cursor = node;
	new_lst = ft_list_new(f(cursor->content));
	if (!new_lst)
		return (NULL);
	result = new_lst;
	cursor = cursor->next;
	while (cursor)
	{
		new_lst->next = ft_list_new(f(cursor->content));
		if (!new_lst->next)
			break ;
		new_lst = new_lst->next;
		cursor = cursor->next;
	}
	return (result);
}
