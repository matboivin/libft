/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 19:23:57 by mboivin           #+#    #+#             */
/*   Updated: 2020/10/06 22:07:10 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function finds the Nth node of the list
**
** head: Pointer to the first node of a list
** n: The N node to find
**
** returns: The Nth node of the list
**          NULL otherwise
*/

t_node				*ft_lstat(t_node *head, unsigned int n)
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
