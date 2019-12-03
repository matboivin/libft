/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 19:28:52 by mboivin           #+#    #+#             */
/*   Updated: 2019/12/03 21:37:46 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** function: Reverses the order of a list’s elements
**
** lst: The address of a pointer to the first link of a list
*/

void		ft_lstrev(t_list **lst)
{
	t_list	*cursor;
	t_list	*prev_node;
	t_list	*next_node;

	cursor = *lst;
	prev_node = NULL;
	next_node = NULL;
	while (cursor->next)
	{
		next_node = cursor->next;
		cursor->next = prev_node;
		prev_node = cursor;
		cursor = next_node;
	}
	*lst = prev_node;
}
