/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 19:46:51 by mboivin           #+#    #+#             */
/*   Updated: 2020/07/31 23:35:28 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** function: Deletes and frees the given element and every successor of that
** element, using the function del and free(3)
** Finally, the pointer to the list must be set to NULL
**
** lst: The adress of a pointer to a element
** new: The adress of the function used to delete the content of the element
*/

void		ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*cursor;
	t_list	*next_node;

	if ((lst == NULL) || (del == NULL))
		return ;
	cursor = *lst;
	if (*lst)
	{
		while (cursor)
		{
			next_node = cursor->next;
			del(cursor->content);
			free(cursor);
			cursor = next_node;
		}
		*lst = NULL;
	}
}
