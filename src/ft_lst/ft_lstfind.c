/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 21:50:45 by mboivin           #+#    #+#             */
/*   Updated: 2020/10/06 22:15:05 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function searches for a node that stores a given data
**
** head: Pointer to the first node of a list
** data_ref: The searched data
**
** returns: The found node
**          NULL otherwise
*/

t_node		*ft_lstfind(t_node *head, void *data_ref)
{
	if (head && data_ref)
	{
		while (head)
		{
			if (head->content == data_ref)
				return (head);
			head = head->next;
		}
	}
	return (NULL);
}
