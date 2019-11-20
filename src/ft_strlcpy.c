/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:26:24 by mboivin           #+#    #+#             */
/*   Updated: 2019/11/20 18:12:46 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Recoded strlcpy libc function: Copies up to size − 1 characters from
** the NUL-terminated string src to dst, NUL-terminating the result
**
** dst: A pointer to the destination string
** src: A pointer to the source string
** size: The size of the destination buffer
**
** returns: The total length of src
*/

size_t		ft_strlcpy(char *dst, char const *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	while (src[i] && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}
