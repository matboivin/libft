/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ischarset.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 14:09:32 by mboivin           #+#    #+#             */
/*   Updated: 2019/11/20 17:55:33 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function: Checks if c is present in set
**
** c: A character
** set: A string
**
** returns: A non-zero integer if c is present in set
**          Zero value otherwise
*/

int		ft_ischarset(char c, char *set)
{
	int		i;

	i = 0;
	while (set[i] && set[i] != c)
		i++;
	return (set[i] == c);
}
