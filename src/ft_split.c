/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 12:38:42 by mboivin           #+#    #+#             */
/*   Updated: 2019/12/02 23:04:49 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function: Allocates (with malloc(3)) and returns an resultay of strings
** obtained by splitting s using the character c as a delimiter
**
** s: The string to be split
** c: The delimiter character
**
** returns: The result of new strings ended by a NULL pointer
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
	if (!(splittedstr = (char *)malloc(sizeof(char) * len + 1)))
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
	char		**result;

	if (!s || s == 0)
		return (NULL);
	s_count = count_strings((char *)s, c);
	len = 0;
	i = 0;
	if (!(result = (char **)malloc(sizeof(*result) * s_count + 1)))
		return (NULL);
	while (s[i] && len < s_count)
	{
		while (s[i] && s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		result[len] = get_splitted_strings((char *)s, j, i);
		len++;
	}
	result[len] = NULL;
	return (result);
}
