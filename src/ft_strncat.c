/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 12:15:10 by mboivin           #+#    #+#             */
/*   Updated: 2019/11/19 12:23:40 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Recoded strncat libc function that appends no more than n characters of the
** string pointed to by src to the end of the string pointed to by dst and
** nul-terminates the resulting string. It returns a pointer to the resulting
** concatenated string dst.
*/

char		*ft_strncat(char *dst, char const *src, size_t n)
{
	size_t	i;
	size_t	dst_len;

	i = 0;
	dst_len = ft_strlen(dst);
	while (src[i] && i < n)
	{
		dst[dst_len] = src[i];
		dst_len++;
		i++;
	}
	dst[dst_len] = '\0';
	return (dst);
}
