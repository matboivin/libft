/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:23:00 by mboivin           #+#    #+#             */
/*   Updated: 2019/11/20 18:09:12 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Recoded memcpy libc function: Copies n bytes from memory area src to dst
**
** dst: The pointer to the destination array where the content is to be copied
** src: The pointer to the source of data to be copied
** n: The maximum number of bytes to copy
**
** returns: The original value of dst
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
