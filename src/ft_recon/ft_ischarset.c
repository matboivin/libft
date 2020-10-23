/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ischarset.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 14:09:32 by mboivin           #+#    #+#             */
/*   Updated: 2020/10/23 23:55:35 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_recon.h"

/*
** This function checks if c is present in set
**
** c: A character
** set: A string
**
** returns: A non-zero integer if c is present in set
**          0 otherwise
*/

bool	ft_ischarset(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i] && set[i] != c)
		i++;
	return (set[i] == c);
}
