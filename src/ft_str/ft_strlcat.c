/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:23:37 by mboivin           #+#    #+#             */
/*   Updated: 2020/07/31 23:44:47 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Recoded strlcat libc function: Appends the NUL-terminated string src to the
** end of dst at most size − dst length − 1 bytes, NUL-terminating the result
**
** dst: A pointer to the destination string
** src: A pointer to the source string
** size: The size of the destination buffer
**
** returns: The total length of the string (dst + src)
*/

size_t			ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		dst_len;
	size_t		src_len;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size <= dst_len)
		return (src_len + size);
	while (dst[i] && (i < (size - 1)))
		i++;
	while (*src && (i < (size - 1)))
	{
		dst[i] = *src;
		src++;
		i++;
	}
	dst[i] = '\0';
	return (dst_len + src_len);
}
