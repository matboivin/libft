/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 18:54:45 by mboivin           #+#    #+#             */
/*   Updated: 2020/04/12 20:34:09 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Recoded strcat libc function: Appends the NUL-terminated string s2 to the
** end of s1, NUL-terminating the result
**
** s1: A pointer to the destination string
** s2: A pointer to the source string
**
** returns: A pointer to the destination string s1
*/

char		*ft_strcat(char *s1, const char *s2)
{
	size_t	dst_len;
	size_t	i;

	dst_len = ft_strlen(s1);
	i = 0;
	while (s2[i])
	{
		s1[dst_len + i] = s2[i];
		i++;
	}
	s1[dst_len + i] = '\0';
	return (s1);
}
