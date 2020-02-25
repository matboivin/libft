/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 11:43:57 by mboivin           #+#    #+#             */
/*   Updated: 2020/02/25 18:31:34 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function: Allocates (with malloc(3)) and returns a copy of the string given
** as argument without the characters specified in the set argument at the
** beginning and the end of the string
**
** s1: The string to be trimmed
** set: The reference set of characters to trim
**
** returns: The trimmed string
**          NULL otherwise
*/

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*result;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_ischarset(s1[start], set))
		start++;
	if (!s1[start])
		return (ft_strdup(s1 + start));
	while (s1[start] && ft_ischarset(s1[end], set))
		end--;
	len = (end - start) + 1;
	result = ft_substr(s1, start, len);
	return (result);
}
