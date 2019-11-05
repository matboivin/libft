/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:22:47 by mboivin           #+#    #+#             */
/*   Updated: 2019/11/05 19:08:40 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Recoded memchr libc function: locates the first occurrence of c
**
** s: the pointer to the block of memory where the search is performed
** c: the value to find
** n: the number of bytes to be analyzed
**
** returns: a pointer to the byte located
**          NULL otherwise
*/

void				*ft_memchr(void const *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	uc;

	i = 0;
	uc = (unsigned char)c;
	p = (unsigned char *)s;
	while (n--)
	{
		if (p[i] == uc)
			return (p + i);
		i++;
	}
	return (NULL);
}
