/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:22:47 by mboivin           #+#    #+#             */
/*   Updated: 2019/11/20 18:09:02 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Recoded memchr libc function: Locates the first occurrence of c
**
** s: The pointer to the block of memory where the search is performed
** c: The value to find
** n: The number of bytes to be analyzed
**
** returns: A pointer to the byte located
**          NULL otherwise
*/

void				*ft_memchr(void const *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*from;
	unsigned char	to_find;

	i = 0;
	from = (unsigned char *)s;
	to_find = (unsigned char)c;
	while (n--)
	{
		if (from[i] == to_find)
			return (from + i);
		i++;
	}
	return (NULL);
}
