/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/12 20:55:19 by mboivin           #+#    #+#             */
/*   Updated: 2021/01/02 22:25:19 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_str.h"

/*
** This function converts all lower-case letters of s to upper-case letters
*/

char	*ft_strupcase(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if ((s[i] >= 'a') && (s[i] <= 'z'))
			s[i] -= 32;
		i++;
	}
	return (s);
}
