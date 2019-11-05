/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:24:03 by mboivin           #+#    #+#             */
/*   Updated: 2019/11/05 19:53:26 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Recoded strnstr libc function: locates the first occurrence of the
** null-terminated string needle in the null-terminated string haystack
**
** s1, s2: pointers to the buffers to be compared
** n: the number of bytes to be compared
**
** returns: if needle is an empty string, haystack is returned
**          if needle occurs nowhere in haystack, NULL is returned
**          otherwise a pointer to the first character of the first occurrence
**          is returned
*/

char		*ft_strnstr(char const *haystack, char const *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*p;
	char	*tmp;

	i = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	j = ft_strlen(needle);
	p = (char *)haystack;
	tmp = (char *)needle;
	while (p[i] && (i + j) <= len)
	{
		if (ft_strnequ(p + i, tmp, j))
			return ((char *)(p + i));
		i++;
	}
	return (NULL);
}
