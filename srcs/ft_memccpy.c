/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 18:35:42 by mboivin           #+#    #+#             */
/*   Updated: 2019/06/26 21:23:51 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Recoded memccpy libc function that copies bytes from memory area src
** to memory area dst, stopping after the first occurrence of c has been copied,
** or after n bytes have been copied, whichever comes first.
*/

void				*ft_memccpy(void *dst, void const *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*to;
	unsigned char	*from;

	i = 0;
	to = (unsigned char *)dst;
	from = (unsigned char *)src;
	while (n--)
	{
		to[i] = from[i];
		if (from[i] == (unsigned char)c)
			return (to + i + 1);
		i++;
	}
	return (NULL);
}
