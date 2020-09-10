/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:22:54 by mboivin           #+#    #+#             */
/*   Updated: 2020/09/10 22:29:26 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Recoded memcmp libc function: Compares byte string s1 against byte string s2
** Both strings are assumed to be n bytes long
**
** s1, s2: Pointers to the buffers to be compared
** n: The number of bytes to be compared
**
** returns: Zero if the two strings are identical
**          Otherwise the difference between the first two differing bytes
*/

int					ft_memcmp(void const *s1, void const *s2, size_t n)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	if (!s1 && !s2)
		return (0);
	i = 0;
	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}
