/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 18:54:45 by mboivin           #+#    #+#             */
/*   Updated: 2019/11/06 17:21:29 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Recoded strcat libc function: appends the NUL-terminated string s2 to the
** end of s1, NUL-terminating the result
**
** s1: a pointer to the destination string
** s2: a pointer to the source string
**
** returns: a pointer to the destination string s1
*/

char		*ft_strcat(char *s1, char const *s2)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(s1);
	j = 0;
	while (s2[j])
	{
		s1[i + j] = s2[j];
		j++;
	}
	s1[i + j] = '\0';
	return (s1);
}
