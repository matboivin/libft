/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 16:34:37 by mboivin           #+#    #+#             */
/*   Updated: 2020/10/06 22:10:28 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function takes a node and frees its content memory using the function
** del given as a parameter
** The memory of next must not be freed under any circumstance
**
** to_free: The node to free
** del: The address of the function to delete the content
*/

void		ft_lstdelone(t_node *to_free, void (*del)(void *))
{
	if (!to_free || !del)
		return ;
	del(to_free->content);
	free(to_free);
}
