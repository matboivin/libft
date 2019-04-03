/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 16:33:24 by mboivin           #+#    #+#             */
/*   Updated: 2018/11/26 13:37:47 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function allocates (with malloc(3)) and returns a “fresh” link. The
** variables content and content_size of the new link are initialized by copy
** of the parameters of the function. If the parameter content is nul, the
** variable content is initialized to NULL and the variable content_size is
** initialized to 0 even if the parameter content_size isn’t. The variable next
** is initialized to NULL. If the allocation fails, the function returns NULL.
*/

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*lstnew;

	if (!(lstnew = (t_list *)malloc(sizeof(*lstnew))))
		return (NULL);
	if (!content)
	{
		lstnew->content = NULL;
		lstnew->content_size = 0;
	}
	else
	{
		if (!(lstnew->content = malloc(sizeof(*content) * content_size)))
		{
			free(lstnew);
			return (NULL);
		}
		ft_memcpy(lstnew->content, content, content_size);
		lstnew->content_size = content_size;
	}
	lstnew->next = NULL;
	return (lstnew);
}
