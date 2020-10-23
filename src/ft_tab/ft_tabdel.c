/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 21:40:54 by mboivin           #+#    #+#             */
/*   Updated: 2020/10/24 00:00:31 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_mem.h"
#include "libft_tab.h"

/*
** Function: Frees a 2D array
**
** to_free: The 2D array to be freed
*/

void	ft_tabdel(char **to_free)
{
	int	i;

	i = 0;
	if (to_free)
	{
		while (to_free[i])
		{
			ft_memdel((void **)&(to_free[i]));
			i++;
		}
		ft_memdel((void **)&to_free);
	}
}
