/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 16:37:24 by mboivin           #+#    #+#             */
/*   Updated: 2020/10/06 22:16:03 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function iterates the list from node and applies the function f to the
** content of each node
**
** node: Pointer to a node
** f: The address of the function to iterate on the list
*/

void		ft_lstiter(t_node *node, void (*f)(void *))
{
	if (!node || !f)
		return ;
	while (node)
	{
		f(node->content);
		node = node->next;
	}
}
