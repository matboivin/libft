/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 19:23:57 by mboivin           #+#    #+#             */
/*   Updated: 2020/02/25 18:34:48 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** function: Finds the Nth element of the list
**
** lst: The address of a pointer to the first link of a list
** nbr: The element to find
**
** returns: The Nth element of the list
**          NULL otherwise
*/

t_list				*ft_lstat(t_list *lst, unsigned int nbr)
{
	unsigned int	i;

	i = 0;
	if (lst)
	{
		while (lst->next && i != nbr)
		{
			lst = lst->next;
			i++;
		}
		return (lst);
	}
	return (NULL);
}
