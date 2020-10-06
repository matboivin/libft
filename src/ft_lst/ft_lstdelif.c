/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelif.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 22:08:20 by mboivin           #+#    #+#             */
/*   Updated: 2020/10/06 22:24:33 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function erases off the list all nodes, whose data is "equal" to the
** reference data
**
** head: Pointer to the first node of a list
** data_ref: The data to be compared to the content
*/

void		ft_lstdelif(t_node **head, void *data_ref)
{
	t_node	*cursor;
	t_node	*to_free;

	if (!head || !data_ref)
		return ;
	if (*head)
	{
		cursor = *head;
		to_free = NULL;
		while (cursor)
		{
			if (cursor->content == data_ref)
			{
				to_free = cursor;
				cursor = cursor->next;
				free(to_free);
			}
			else
				cursor = cursor->next;
		}
	}
}
