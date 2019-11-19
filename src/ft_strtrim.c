/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 11:43:57 by mboivin           #+#    #+#             */
/*   Updated: 2019/11/19 12:35:28 by mboivin          ###   ########.fr       */
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
	size_t	s1_len;
	size_t	len;
	char	*trimmedstr;

	if (!s1)
		return (NULL);
	i = 0;
	s1_len = ft_strlen(s1) - 1;
	while (s1 && ft_ischarset(*(s1 + i), set))
		i++;
	if (*(s1 + i) == '\0')
		return (ft_strdup(s1 + i));
	while (s1 && ft_ischarset(*(s1 + s1_len), set))
		s1_len--;
	len = (s1_len - i) + 1;
	trimmedstr = ft_substr(s1, i, len);
	return (trimmedstr);
}
