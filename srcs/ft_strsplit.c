/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 12:38:42 by mboivin           #+#    #+#             */
/*   Updated: 2018/11/26 14:14:58 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char *s, char c)
{
	size_t	i;
	size_t	j;

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
	size_t	k;
	size_t	len;
	char	*word;

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
	size_t	words;
	size_t	i;
	size_t	j;
	size_t	n;
	char	**ptr;

	if (!s || s == 0)
		return (NULL);
	i = 0;
	n = 0;
	words = count_words((char *)s, c);
	if (!(ptr = (char **)malloc(sizeof(*ptr) * words + 1)))
		return (NULL);
	while (s[i] && n < words)
	{
		while (s[i] && s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		ptr[n] = get_words((char *)s, j, i);
		n++;
	}
	ptr[n] = NULL;
	return (ptr);
}
