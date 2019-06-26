/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 18:13:37 by mboivin           #+#    #+#             */
/*   Updated: 2019/06/26 21:39:06 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Recoded memcpy libc function that copies n characters from memory area src
** to memory area dst.
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