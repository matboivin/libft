/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:26:24 by mboivin           #+#    #+#             */
/*   Updated: 2019/11/12 15:40:34 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Recoded strlcpy libc function: copies up to size − 1 characters from
** the NUL-terminated string src to dst, NUL-terminating the result
**
** dst: a pointer to the destination string
** src: a pointer to the source string
** size: the size of the destination buffer
**
** returns: the total length of src
*/

size_t		ft_strlcpy(char *dst, char const *src, size_t size)
{
	size_t	i;
	size_t	len_src;

	i = 0;
	len_src = ft_strlen(src);
	if (size == 0)
		return (len_src);
	while (src[i] && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len_src);
}
