/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 21:50:45 by mboivin           #+#    #+#             */
/*   Updated: 2019/12/03 19:08:39 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** function: Searches for an element that stores a given data
**
** lst: The address of a pointer to the first link of a list
** data_ref: The searched data
**
** returns: The element
**          NULL otherwise
*/

t_list		*ft_lstfind(t_list *lst, void *data_ref)
{
	t_list	*cursor;

	if (lst)
	{
		cursor = lst;
		while (cursor)
		{
			if (cursor->content == data_ref)
				return (cursor);
			cursor = cursor->next;
		}
	}
	return (NULL);
}
