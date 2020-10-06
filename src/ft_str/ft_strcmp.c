/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 18:45:04 by mboivin           #+#    #+#             */
/*   Updated: 2020/10/06 22:56:40 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Recoded strcmp libc function that lexicographically compares s1 and s2
**
** s1, s2: Pointers to the strings to be compared
**
** returns: A value < 0 to indicate s1 is less than s2
**          A value > 0 to indicate s2 is less than s1
**          0 to indicate s1 is equal to s2
*/

int			ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
