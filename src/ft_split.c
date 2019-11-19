/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 12:38:42 by mboivin           #+#    #+#             */
/*   Updated: 2019/11/19 12:36:03 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function: allocates (with malloc(3)) and returns an array of strings
** obtained by splitting s using the character c as a delimiter
**
** s: the string to be split
** c: the delimiter character
**
** returns: the array of new strings ended by a NULL pointer
**          NULL otherwise
*/

static size_t	count_strings(char *s, char c)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			j++;
		i++;
	}
	return (j);
}

static char		*get_splitted_strings(char *s, size_t j, size_t i)
{
	size_t		k;
	size_t		len;
	char		*splittedstr;

	k = 0;
	len = i - j;
	if (j > i)
		return (0);
	if (!(splittedstr = (char *)malloc(sizeof(splittedstr) * len + 1)))
		return (NULL);
	while (k < len)
	{
		splittedstr[k] = s[j];
		k++;
		j++;
	}
	splittedstr[k] = '\0';
	return (splittedstr);
}

char			**ft_split(char const *s, char c)
{
	size_t		s_count;
	size_t		len;
	size_t		i;
	size_t		j;
	char		**arr;

	if (!s || s == 0)
		return (NULL);
	s_count = count_strings((char *)s, c);
	len = 0;
	i = 0;
	if (!(arr = (char **)malloc(sizeof(*arr) * s_count + 1)))
		return (NULL);
	while (s[i] && len < s_count)
	{
		while (s[i] && s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		arr[len] = get_splitted_strings((char *)s, j, i);
		len++;
	}
	arr[len] = NULL;
	return (arr);
}
