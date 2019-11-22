/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 19:28:52 by mboivin           #+#    #+#             */
/*   Updated: 2019/11/22 16:53:48 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** function: Reverses the order of a list’s elements
**
** alst: The address of a pointer to the first link of a list
*/

void		ft_lstrev(t_list **alst)
{
	t_list	*cursor;
	t_list	*prev_node;
	t_list	*next_node;

	cursor = *alst;
	while (cursor->next)
	{
		next_node = cursor->next;
		cursor->next = prev_node;
		prev_node = cursor;
		cursor = next_node;
	}
	*alst = prev_node;
}
