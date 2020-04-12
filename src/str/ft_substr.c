/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 18:32:48 by mboivin           #+#    #+#             */
/*   Updated: 2020/04/12 20:34:09 by mboivin          ###   ########.fr       */
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

char				*ft_substr(const char *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*result;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	result = (char *)malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	while (s[start + i] && len--)
	{
		result[i] = s[start + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
