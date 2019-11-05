/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:23:37 by mboivin           #+#    #+#             */
/*   Updated: 2019/11/05 19:25:34 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Recoded strlcat libc function: appends the NUL-terminated string src to the
** end of dst at most size − dst length − 1 bytes, NUL-terminating the result
**
** dst: a pointer to the destination string
** src: a pointer to the source string
** size: the size of the destination buffer
**
** returns: the total length of the string (dst + src)
*/

size_t			ft_strlcat(char *dst, char const *src, size_t size)
{
	size_t		i;
	size_t		len1;
	size_t		len2;

	i = 0;
	len1 = ft_strlen(dst);
	len2 = ft_strlen(src);
	if (size <= len1)
		return (len2 + size);
	while (dst[i] && i < (size - 1))
		i++;
	while (*src && i < (size - 1))
	{
		dst[i] = *src;
		src++;
		i++;
	}
	dst[i] = '\0';
	return (len1 + len2);
}
