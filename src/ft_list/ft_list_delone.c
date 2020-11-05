/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_delone.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 16:34:37 by mboivin           #+#    #+#             */
/*   Updated: 2020/11/05 18:46:35 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_list.h"

/*
** This function takes a node and frees it
** The memory of next must not be freed under any circumstance
**
** to_free: The node to free
*/

void		ft_list_delone(t_node *to_free)
{
	if (!to_free)
		return ;
	free(to_free);
}
