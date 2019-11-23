/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 21:50:45 by mboivin           #+#    #+#             */
/*   Updated: 2019/11/23 22:35:13 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** function: searches for an element that stores a given data
**
** alst: The address of a pointer to the first link of a list
** data_ref: the searched data
**
** returns: The element
**          NULL otherwise
*/

t_list		*ft_lstfind(t_list *alst, void *data_ref)
{
	t_list	*cursor;

	if (alst)
	{
		cursor = alst;
		while (cursor)
		{
			if (cursor->content == data_ref)
				return (cursor);
			cursor = cursor->next;
		}
	}
	return (NULL);
}
