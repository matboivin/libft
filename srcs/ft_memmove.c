/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 18:24:08 by mboivin           #+#    #+#             */
/*   Updated: 2019/04/01 16:06:42 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Recoded memmove libc function that copies n characters from src to dst. It
** returns a pointer to the destination, which is dst.
*/

void	*ft_memmove(void *dst, void const *src, size_t len)
{
	unsigned char	*from;
	unsigned char	*to;

	if (len == 0 || dst == src)
		return (dst);
	from = (unsigned char *)dst;
	to = (unsigned char *)src;
	if (dst < src)
		return (ft_memcpy(from, to, len));
	else
	{
		from = from + len - 1;
		to = to + len - 1;
		while (len--)
			*from-- = *to--;
	}
	return (dst);
}
