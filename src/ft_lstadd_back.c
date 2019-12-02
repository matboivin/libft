/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 19:41:33 by mboivin           #+#    #+#             */
/*   Updated: 2019/12/02 23:41:54 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** function: Adds the element new at the end of the list
**
** alst: The address of a pointer to the first link of a list
** new: The address of a pointer to the element to add to the list
*/

void		ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*cursor;

	if (alst && *alst && new)
	{
		cursor = *alst;
		while (cursor->next)
			cursor = cursor->next;
		cursor = new;
	}
}
