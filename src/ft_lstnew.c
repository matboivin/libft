/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 17:33:28 by mboivin           #+#    #+#             */
/*   Updated: 2019/11/20 18:23:36 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** function: Allocates (with malloc(3)) and returns a new element.
** The variable content is initialized with the value of the parameter content.
** The variable next is initialized to NULL.
**
** content: The content to create the new element with
**
** returns: The new element
*/

t_list		*ft_lstnew(void *content)
{
	t_list	*new_elem;

	if (!(new_elem = (t_list *)malloc(sizeof(*new_elem))))
		return (NULL);
	new_elem->content = content;
	new_elem->next = NULL;
	return (new_elem);
}
