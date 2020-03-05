/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ischarset.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 14:09:32 by mboivin           #+#    #+#             */
/*   Updated: 2020/03/05 14:09:59 by mboivin          ###   ########.fr       */
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

bool	ft_ischarset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] && set[i] != c)
		i++;
	if (set[i] == c)
		return (true);
	return (false);
}
