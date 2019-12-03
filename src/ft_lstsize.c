/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 18:17:57 by mboivin           #+#    #+#             */
/*   Updated: 2019/12/03 19:14:12 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** function: Counts the number of elements int a list
**
** lst: The beginning of the list
**
** returns: The length of the list
*/

int			ft_lstsize(t_list *lst)
{
	t_list	*cursor;
	int		size;

	size = 0;
	if (lst)
	{
		cursor = lst;
		while (cursor)
		{
			size++;
			cursor = cursor->next;
		}
	}
	return (size);
}
