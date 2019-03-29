/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 12:20:18 by mboivin           #+#    #+#             */
/*   Updated: 2018/11/09 14:18:36 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Recoded strlcat libc function that appends the string pointed to by src to
** the end of the string pointed to by dst and nul-terminates the resulting
** string. It returns the length of the concatenated string whether or not it
** was possible to copy it all.
*/

size_t		ft_strlcat(char *dst, char const *src, size_t size)
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
