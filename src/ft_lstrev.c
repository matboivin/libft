/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 19:28:52 by mboivin           #+#    #+#             */
/*   Updated: 2019/11/22 14:24:02 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

/*
** function: Reverses the order of a list’s elements
**
** alst: The address of a pointer to the first link of a list
*/

void		ft_lstrev(t_list **alst)
{
	t_list	*cursor;
	t_list	*prev;
	t_list	*next;

	cursor = *alst;
	while (cursor->next)
	{
		next = cursor->next;
		cursor->next = prev;
		prev = cursor;
		cursor = next;
	}
	*alst = prev;
}
