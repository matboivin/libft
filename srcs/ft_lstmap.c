/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 16:38:13 by mboivin           #+#    #+#             */
/*   Updated: 2018/11/26 13:51:50 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function iterates a list lst and applies the function f to each link
** to create a “fresh” list (using malloc(3)) resulting from the successive
** applications of f. If the allocation fails, the function returns NULL.
*/

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*tmp;
	t_list	*dst;
	t_list	*ptr;

	if (lst)
	{
		tmp = f(lst);
		if (!(dst = ft_lstnew(tmp->content, tmp->content_size)))
			return (NULL);
		ptr = dst;
		lst = lst->next;
		tmp = tmp->next;
		while (lst)
		{
			tmp = f(lst);
			if (!(dst->next = ft_lstnew(tmp->content, tmp->content_size)))
				return (NULL);
			dst = dst->next;
			lst = lst->next;
			tmp = tmp->next;
		}
		return (ptr);
	}
	return (NULL);
}
