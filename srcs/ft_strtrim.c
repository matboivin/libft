/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 11:43:57 by mboivin           #+#    #+#             */
/*   Updated: 2018/11/26 17:04:09 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function allocates (with malloc(3)) and returns a copy of the string
** given as argument without whitespaces at the beginning or at the end of the
** string. Will be considered as whitespaces the following characters ’ ’, ’\n’
** and ’\t’. If s has no whitespaces at the beginning or at the end, the
** function returns a copy of s. If the allocation fails the function returns
** NULL.
*/

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*ptr;

	if (!s)
		return (NULL);
	i = 0;
	len = 0;
	j = ft_strlen(s) - 1;
	while (s && ft_iswhitespace(*(s + i)))
		i++;
	if (*(s + i) == '\0')
		return (ft_strdup(s + i));
	while (s && ft_iswhitespace(*(s + j)))
		j--;
	len = (j - i) + 1;
	if (!(ptr = (char *)malloc(sizeof(ptr) * len)))
		return (NULL);
	ptr = ft_strsub(s, i, len);
	return (ptr);
}
