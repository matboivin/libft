/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 19:23:57 by mboivin           #+#    #+#             */
/*   Updated: 2019/11/22 14:21:15 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

/*
** function: Finds the Nth element of the list
**
** alst: The address of a pointer to the first link of a list
** nbr: The element to find
**
** returns: The Nth element of the list
**          NULL otherwise
*/

t_list		*ft_lstat(t_list *alst, unsigned int nbr)
{
	t_list	*cursor;
	int		i;

	if (!alst)
		return (NULL);
	i = 0;
	cursor = *alst;
	while (cursor->next && i != nbr)
	{
		cursor = cursor->next;
		i++;
	}
	return (cursor);
}
