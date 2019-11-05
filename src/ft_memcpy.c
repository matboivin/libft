/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:23:00 by mboivin           #+#    #+#             */
/*   Updated: 2019/11/05 19:08:22 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Recoded memcpy libc function: copies n bytes from memory area src to dst
**
** dst: the pointer to the destination array where the content is to be copied
** src: the pointer to the source of data to be copied
** n: the maximum number of bytes to copy
**
** returns: the original value of dst
*/

void				*ft_memcpy(void *dst, void const *src, size_t n)
{
	size_t			i;
	unsigned char	*to;
	unsigned char	*from;

	if (!dst && !src)
		return (0);
	i = 0;
	to = (unsigned char *)dst;
	from = (unsigned char *)src;
	while (n--)
	{
		to[i] = from[i];
		i++;
	}
	return (dst);
}
