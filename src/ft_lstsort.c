/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 22:20:19 by mboivin           #+#    #+#             */
/*   Updated: 2019/12/03 21:09:02 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** function: Sorts the list’s contents by ascending order by comparing two links
** thanks to a function that can compare the content held in those two links
**
** lst: The address of a pointer to the first link of a list
** cmp: The comparison function
*/

void		ft_lstort(t_list **lst, int (*cmp)())
{
	t_list	*cursor;
	t_list	*next_node;
	t_list	*tmp;

	if (!lst || !cmp)
		return ;
	cursor = (*lst);
	if (*lst)
	{
		while (cursor)
		{
			next_node = cursor->next;
			while (next_node)
			{
				if (!cmp(cursor->content, next_node->content))
				{
					tmp = cursor->content;
					cursor->content = next_node->content;
					next_node->content = tmp;
				}
				next_node = next_node->next;
			}
			cursor = cursor->next;
		}
	}
}
