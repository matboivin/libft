/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 19:41:33 by mboivin           #+#    #+#             */
/*   Updated: 2020/09/10 22:19:09 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** function: Adds the new element at the end of the list
**
** lst: The address of a pointer to the first link of a list
** new_elem: The address of a pointer to the element to add to the list
*/

void		ft_lstappend(t_list **lst, t_list *new_elem)
{
	t_list	*cursor;

	if (!lst || !new_elem)
		return ;
	cursor = *lst;
	if (*lst)
	{
		while (cursor->next)
			cursor = cursor->next;
		cursor->next = new_elem;
	}
	else
		*lst = new_elem;
}
