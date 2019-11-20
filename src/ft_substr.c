/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 18:32:48 by mboivin           #+#    #+#             */
/*   Updated: 2019/11/20 18:14:29 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function: Allocates (with malloc(3)) and returns a substring from the string
** given in argument. It begins at index ’start’ and is of maximum size ’len’
**
** s: The string from which create the substring
** start: The start index of the substring in the string
** len: The maximum length of the substring
**
** returns: The substring
**          NULL otherwise
*/

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substr;

	i = 0;
	if (!s)
		return (NULL);
	if (!(substr = (char*)malloc(sizeof(*substr) * len + 1)))
		return (NULL);
	while (len--)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
