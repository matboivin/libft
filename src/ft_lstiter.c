/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 16:37:24 by mboivin           #+#    #+#             */
/*   Updated: 2019/11/20 20:01:59 by mboivin          ###   ########.fr       */
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

	if (lst)
	{
		cursor = lst;
		while (cursor)
		{
			f(cursor);
			cursor = cursor->next;
		}
	}
}
