/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 18:17:57 by mboivin           #+#    #+#             */
/*   Updated: 2020/10/06 22:25:43 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function counts the number of nodes in a list
**
** head: Pointer to the first node of a list
**
** returns: The length of the list
*/

int			ft_lstsize(t_node *head)
{
	int		size;

	size = 0;
	if (head)
	{
		while (head)
		{
			size++;
			head = head->next;
		}
	}
	return (size);
}
