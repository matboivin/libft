/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ischarset.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 14:09:32 by mboivin           #+#    #+#             */
/*   Updated: 2019/11/06 17:15:47 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function: checks if c is present in set
**
** c: a character
** set: a string
**
** returns: a non-zero integer if c is present in set
**          zero value otherwise
*/

int		ft_ischarset(char c, char *set)
{
	int		i;

	i = 0;
	while (set[i] && set[i] != c)
		i++;
	return (set[i] == c);
}
