/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprepend.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 16:36:30 by mboivin           #+#    #+#             */
/*   Updated: 2020/09/10 22:19:46 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** function: Adds the new element at the beginning of the list
**
** lst: The address of a pointer to the first link of a list
** new_elem: The address of a pointer to the element to add to the list
*/

void		ft_lstprepend(t_list **lst, t_list *new_elem)
{
	if (lst && new_elem)
	{
		new_elem->next = *lst;
		*lst = new_elem;
	}
}
