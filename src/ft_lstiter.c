/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 16:37:24 by mboivin           #+#    #+#             */
/*   Updated: 2019/12/02 23:41:05 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** function: Iterates the list lst and applies the function f to the content of
** each element
**
** lst: The address of a pointer to a element
** f: The address of the function to iterate on the list
*/

void		ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*cursor;

	if (!lst || !f)
		return ;
	cursor = lst;
	while (cursor)
	{
		f(cursor);
		cursor = cursor->next;
	}
}
