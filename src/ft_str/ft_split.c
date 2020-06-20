/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 12:38:42 by mboivin           #+#    #+#             */
/*   Updated: 2020/06/20 22:51:32 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Auxiliary function: Computes the number of strings to split
**
** s: The total string to be split
** c: The delimiter character
**
** returns: The number of substrings delimited by c
*/

static size_t	count_strings(const char *s, char c)
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

/*
** Auxiliary function: Allocates and copies a splitted string
**
** s: The total string to be split
** i: The index of the last non-delimiter character in s
** c_index: The index of the last delimiter character in s
**
** returns: The splitted string
*/

static char		*get_strings(const char *s, size_t i, size_t c_index)
{
	size_t		j;
	size_t		len;
	char		*result;

	if (c_index > i)
		return (0);
	j = 0;
	len = i - c_index;
	result = ft_strnew(len);
	if (result == NULL)
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
** Function: Allocates (with malloc(3)) and returns an result of strings
** obtained by splitting s using the character c as a delimiter
**
** s: The string to be split
** c: The delimiter character
**
** returns: The result of new strings ended by a NULL pointer
**          NULL otherwise
*/

char			**ft_split(const char *s, char c)
{
	size_t		str_count;
	size_t		c_index;
	size_t		i;
	size_t		j;
	char		**result;

	if (s == NULL)
		return (NULL);
	str_count = count_strings(s, c);
	i = 0;
	j = 0;
	if (!(result = (char **)malloc((str_count + 1) * sizeof(char*))))
		return (NULL);
	while (s[i] && j < str_count)
	{
		while (s[i] && s[i] == c)
			i++;
		c_index = i;
		while (s[i] && s[i] != c)
			i++;
		result[j] = get_strings(s, i, c_index);
		j++;
	}
	result[j] = NULL;
	return (result);
}
