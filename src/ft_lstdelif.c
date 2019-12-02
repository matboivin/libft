/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelif.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 22:08:20 by mboivin           #+#    #+#             */
/*   Updated: 2019/12/02 23:42:13 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** function: Erases off the list all elements, whose data is "equal" to the
** reference data
**
** alst: The address of a pointer to the first link of a list
** data_ref: The data to be compared to the content
*/

void		ft_lstdelif(t_list **alst, void *data_ref)
{
	t_list	*cursor;
	t_list	*node;

	if (alst && *alst)
	{
		cursor = (*alst);
		while (cursor)
		{
			if (cursor->content == data_ref)
			{
				node = cursor;
				cursor = cursor->next;
				free(node);
			}
			else
				cursor = cursor->next;
		}
	}
}
