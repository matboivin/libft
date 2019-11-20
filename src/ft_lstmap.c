/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 16:38:13 by mboivin           #+#    #+#             */
/*   Updated: 2019/11/20 20:03:18 by mboivin          ###   ########.fr       */
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
**
** returns: The new list
**          NULL otherwise
*/

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{

}

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*tmp;
	t_list	*dst;
	t_list	*p;

	if (lst)
	{
		tmp = f(lst);
		if (!(dst = ft_lstnew(tmp->content, tmp->content_size)))
			return (NULL);
		p = dst;
		lst = lst->next;
		while (lst)
		{
			tmp = f(lst);
			if (!(dst->next = ft_lstnew(tmp->content, tmp->content_size)))
				return (NULL);
			dst = dst->next;
			lst = lst->next;
		}
		return (p);
	}
	return (NULL);
}
