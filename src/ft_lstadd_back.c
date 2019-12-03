/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 19:41:33 by mboivin           #+#    #+#             */
/*   Updated: 2019/12/03 20:57:56 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** function: Adds the element new at the end of the list
**
** lst: The address of a pointer to the first link of a list
** new: The address of a pointer to the element to add to the list
*/

void		ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*cursor;

	if (lst && *lst)
	{
		cursor = ft_lstlast(*lst);
		cursor->next = new;
	}
	else if (!lst && !(*lst))
		*lst = new;
}
