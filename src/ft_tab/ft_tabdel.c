/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 21:40:54 by mboivin           #+#    #+#             */
/*   Updated: 2020/07/06 16:02:21 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function: Frees a 2D array
**
** tab: The 2D array to be freed
*/

void	ft_tabdel(char **tab)
{
	int	i;

	i = 0;
	if (tab)
	{
		while (tab[i])
		{
			ft_memdel((void **)&(tab[i]));
			i++;
		}
		ft_memdel((void **)&tab);
	}
}
