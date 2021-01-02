/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 19:23:57 by mboivin           #+#    #+#             */
/*   Updated: 2021/01/02 22:18:47 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_list.h"

/*
** This function finds the Nth node of the list
**
** head: Pointer to the first node of a list
** n: The N node to find
**
** returns: The Nth node of the list
**          NULL otherwise
*/

t_node	*ft_list_at(t_node *head, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (!head)
		return (NULL);
	while (head->next && (i != n))
	{
		head = head->next;
		i++;
	}
	return (head);
}
