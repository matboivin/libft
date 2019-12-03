/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 19:23:57 by mboivin           #+#    #+#             */
/*   Updated: 2019/12/03 19:08:24 by mboivin          ###   ########.fr       */
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
	t_list			*cursor;
	unsigned int	i;

	if (lst)
	{
		i = 0;
		cursor = lst;
		while (cursor->next && i != nbr)
		{
			cursor = cursor->next;
			i++;
		}
		return (cursor);
	}
	return (NULL);
}
