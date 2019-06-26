/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 14:19:35 by mboivin           #+#    #+#             */
/*   Updated: 2019/06/24 23:27:10 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Recoded strstr libc function that finds the first occurrence of the substring
** needle in the string s. The terminating '\0' characters are not compared. It
** returns a pointer to the first occurrence in s of any of the entire sequence
** of characters specified in needle, or a null pointer otherwise.
*/

char		*ft_strstr(char const *s, char const *needle)
{
	size_t	i;
	size_t	j;
	char	*p;
	char	*tmp;

	i = 0;
	j = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)s);
	p = (char *)s;
	tmp = (char *)needle;
	while (p[i])
	{
		while (tmp[j] && p[i + j] == tmp[j])
			j++;
		if (tmp[j] == '\0')
			return ((char *)(p + i));
		j = 0;
		i++;
	}
	return (NULL);
}
