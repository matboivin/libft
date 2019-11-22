/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 16:34:37 by mboivin           #+#    #+#             */
/*   Updated: 2019/11/22 16:55:58 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** function: Takes as a parameter an element and frees the memory of the
** element’s content using the function del given as a parameter
** The memory of next must not be freed under any circumstance
**
** lst: The element to free
** del: The address of the function to delete the content
*/

void		ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list	*cursor;

	if (lst && del)
	{
		cursor = lst;
		del(cursor->content);
		free(cursor);
		lst = NULL;
	}
}
