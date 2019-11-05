/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:23:56 by mboivin           #+#    #+#             */
/*   Updated: 2019/11/05 19:28:59 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Recoded strncmp libc function: lexicographically compares the null-terminated
** strings s1 and s2
**
** s1, s2: pointers to the buffers to be compared
** n: the number of bytes to be compared
**
** returns: zero if the two strings are identical
**          otherwise the difference between the first two differing bytes
*/

int			ft_strncmp(char const *s1, char const *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < (n - 1))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
