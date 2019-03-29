/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ischarset.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 14:09:32 by mboivin           #+#    #+#             */
/*   Updated: 2018/11/22 14:11:12 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function returns a non-zero integer if a character passed as an argument
** is present in the second argument, else zero value is returned.
*/

int		ft_ischarset(char c, char *set)
{
	int		i;

	i = 0;
	while (set[i] && set[i] != c)
		i++;
	return (set[i] && set[i] == c);
}
