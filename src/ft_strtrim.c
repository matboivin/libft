/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 11:43:57 by mboivin           #+#    #+#             */
/*   Updated: 2019/11/06 18:46:55 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function: allocates (with malloc(3)) and returns a copy of the string given
** as argument without the characters specified in the set argument at the
** beginning and the end of the string
**
** s1: the string to be trimmed
** set: the reference set of characters to trim
**
** returns: the trimmed string
**          NULL otherwise
*/

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*p;

	if (!s)
		return (NULL);
	i = 0;
	j = ft_strlen(s) - 1;
	while (s && ft_ischarset(*(s + i), set))
		i++;
	if (*(s + i) == '\0')
		return (ft_strdup(s + i));
	while (s && ft_ischarset(*(s + j), set))
		j--;
	len = (j - i) + 1;
	p = ft_strsub(s, i, len);
	return (p);
}
