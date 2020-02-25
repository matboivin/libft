/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 18:39:26 by mboivin           #+#    #+#             */
/*   Updated: 2020/01/06 18:16:36 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Recoded strcpy libc function: Copies the string src to dst, NULL-terminating
** the result
**
** dst: A pointer to the destination string
** src: A pointer to the source string
**
** returns: A pointer to the destination string dst
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
