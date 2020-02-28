/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoindel.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 15:16:05 by mboivin           #+#    #+#             */
/*   Updated: 2020/02/28 15:18:43 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function: Allocates a new string, result of the concatenation of s1 and s2,
** frees the first pointer if it exists
**
** s1: A pointer to the destination string
** s2: A pointer to the source string
**
** returns: The new string
**          NULL otherwise
*/

char			*ft_strjoindel(char *s1, char *s2)
{
	char		*result;
	size_t		len_s1;
	size_t		len_s2;
	size_t		len;

	len_s1 = 0;
	len_s2 = ft_strlen(s2);
	if (s1)
		len_s1 = ft_strlen(s1);
	len = len_s1 + len_s2;
	result = (char *)malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	if (s1)
	{
		ft_strlcpy(result, s1, (len_s1 + 1));
		ft_strdel(&s1);
	}
	ft_strlcpy(result + len_s1, s2, (len_s2 + 1));
	return (result);
}
