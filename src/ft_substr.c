/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 18:32:48 by mboivin           #+#    #+#             */
/*   Updated: 2019/11/06 18:32:59 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function: allocates (with malloc(3)) and returns a substring from the string
** given in argument. It begins at index ’start’ and is of maximum size ’len’
**
** s: the string from which create the substring
** start: the start index of the substring in the string
** len: the maximum length of the substring
**
** returns: the substring
**          NULL otherwise
*/

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	if (!s)
		return (NULL);
	if (!(str = (char*)malloc(sizeof(*str) * len + 1)))
		return (NULL);
	while (len--)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
