/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 14:19:35 by mboivin           #+#    #+#             */
/*   Updated: 2019/11/19 12:28:09 by mboivin          ###   ########.fr       */
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
	char	*from;
	char	*to_find;

	i = 0;
	j = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)s);
	from = (char *)s;
	to_find = (char *)needle;
	while (from[i])
	{
		while (to_find[j] && from[i + j] == to_find[j])
			j++;
		if (to_find[j] == '\0')
			return ((char *)(from + i));
		j = 0;
		i++;
	}
	return (NULL);
}
