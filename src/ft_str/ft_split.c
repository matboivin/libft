/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 12:38:42 by mboivin           #+#    #+#             */
/*   Updated: 2020/10/24 00:07:17 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft_str.h"

/*
** This function computes the number of strings to split
**
** s: The total string to be split
** c: The delimiter character
**
** returns: The number of substrings delimited by c
*/

static size_t	ft_count_strings(const char *s, char c)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if ((s[i] != c) && ((i == 0) || (s[i - 1] == c)))
			j++;
		i++;
	}
	return (j);
}

/*
** This function allocates and copies a splitted string
**
** s: The total string to be split
** i: The index of the last non-delimiter character in s
** c_index: The index of the last delimiter character in s
**
** returns: The splitted string
*/

static char		*ft_get_strings(const char *s, size_t i, size_t c_index)
{
	size_t		j;
	size_t		len;
	char		*result;

	if (c_index > i)
		return (0);
	j = 0;
	len = i - c_index;
	result = ft_strnew(len);
	if (!result)
		return (NULL);
	while (j < len)
	{
		result[j] = s[c_index];
		c_index++;
		j++;
	}
	result[j] = '\0';
	return (result);
}

/*
** This function allocates (with malloc(3)) and returns an result of strings
** obtained by splitting s using the character c as a delimiter
**
** s: The string to be split
** c: The delimiter character
**
** returns: The new strings ended by a NULL pointer
**          NULL otherwise
*/

char			**ft_split(const char *s, char c)
{
	size_t		str_count;
	size_t		c_index;
	size_t		i;
	size_t		j;
	char		**result;

	if (!s)
		return (NULL);
	str_count = ft_count_strings(s, c);
	i = 0;
	j = 0;
	if (!(result = malloc((str_count + 1) * sizeof(char *))))
		return (NULL);
	while (s[i] && (j < str_count))
	{
		while (s[i] && (s[i] == c))
			i++;
		c_index = i;
		while (s[i] && (s[i] != c))
			i++;
		result[j] = ft_get_strings(s, i, c_index);
		j++;
	}
	result[j] = NULL;
	return (result);
}
