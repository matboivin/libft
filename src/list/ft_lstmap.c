/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 16:38:13 by mboivin           #+#    #+#             */
/*   Updated: 2020/02/25 18:36:09 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** function: Iterates the list lst and applies the function f to the content of
** each element
** Creates a new list resulting of the successive applications of the function f
** The del function is here to delete the content of an element if needed
**
** lst: The address of a pointer to a element
** f: The address of the function to iterate on the list
** del: The address of the function to delete the content
**
** returns: The new list
**          NULL otherwise
*/

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*cursor;
	t_list	*new_lst;
	t_list	*alst;

	if (lst == NULL || f == NULL)
		return (NULL);
	cursor = lst;
	if (!(new_lst = ft_lstnew(f(cursor->content))))
		return (NULL);
	alst = new_lst;
	cursor = cursor->next;
	while (cursor)
	{
		if (!(new_lst->next = ft_lstnew(f(cursor->content))))
		{
			del(new_lst->content);
			return (NULL);
		}
		new_lst = new_lst->next;
		cursor = cursor->next;
	}
	return (alst);
}
