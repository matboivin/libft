/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 11:38:02 by mboivin           #+#    #+#             */
/*   Updated: 2019/06/26 21:14:52 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Recoded strnstr libc function that finds the first occurrence of the
** substring needle in the string s, where not more than len characters are
** searched. The terminating '\0' characters are not compared. It returns a
** pointer to the first occurrence in s of any of the entire sequence of
** characters specified in needle, or a null pointer otherwise.
*/

char		*ft_strnstr(char const *s, char const *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*p;
	char	*tmp;

	i = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)s);
	j = ft_strlen(needle);
	p = (char *)s;
	tmp = (char *)needle;
	while (p[i] && (i + j) <= len)
	{
		if (ft_strnequ(p + i, tmp, j))
			return ((char *)(p + i));
		i++;
	}
	return (NULL);
}
