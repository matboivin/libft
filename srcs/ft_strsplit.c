/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 12:38:42 by mboivin           #+#    #+#             */
/*   Updated: 2019/06/24 23:26:25 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function allocates (with malloc(3)) and returns an array of “fresh”
** strings (all ending with ’\0’, including the array itself) obtained by
** spliting s using the character c as a delimiter. If the allocation fails
** the function returns NULL.
*/

static size_t	count_words(char *s, char c)
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

static char		*get_words(char *s, size_t j, size_t i)
{
	size_t		k;
	size_t		len;
	char		*word;

	k = 0;
	len = i - j;
	if (j > i)
		return (0);
	if (!(word = (char *)malloc(sizeof(word) * len + 1)))
		return (NULL);
	while (k < len)
	{
		word[k] = s[j];
		k++;
		j++;
	}
	word[k] = '\0';
	return (word);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t		words;
	size_t		i;
	size_t		j;
	size_t		n;
	char		**p;

	if (!s || s == 0)
		return (NULL);
	i = 0;
	n = 0;
	words = count_words((char *)s, c);
	if (!(p = (char **)malloc(sizeof(*p) * words + 1)))
		return (NULL);
	while (s[i] && n < words)
	{
		while (s[i] && s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		p[n] = get_words((char *)s, j, i);
		n++;
	}
	p[n] = NULL;
	return (p);
}
