/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 22:20:19 by mboivin           #+#    #+#             */
/*   Updated: 2020/10/23 23:44:29 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_list.h"

/*
** This function sorts the list’s content by ascending order by comparing two
** nodes thanks to a function that can compare their content
**
** head: Pointer to the first node of a list
** cmp: The comparison function
*/

void		ft_lstsort(t_node **head, int (*cmp)())
{
	t_node	*cursor;
	t_node	*next_node;
	t_node	*next_content;

	if (!head || !cmp)
		return ;
	if (*head)
	{
		cursor = *head;
		while (cursor)
		{
			next_node = cursor->next;
			while (next_node)
			{
				if (!cmp(cursor->content, next_node->content))
				{
					next_content = cursor->content;
					cursor->content = next_node->content;
					next_node->content = next_content;
				}
				next_node = next_node->next;
			}
			cursor = cursor->next;
		}
	}
}
