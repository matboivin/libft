/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 18:39:26 by mboivin           #+#    #+#             */
/*   Updated: 2019/11/06 17:31:32 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Recoded strcpy libc function: copies the string src to dst,
** NUL-terminating the result
**
** dst: a pointer to the destination string
** src: a pointer to the source string
**
** returns: a pointer to the destination string dst
*/

char		*ft_strcpy(char *dst, char const *src)
{
	size_t	i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
