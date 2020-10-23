/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoindel.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 15:16:05 by mboivin           #+#    #+#             */
/*   Updated: 2020/10/23 23:57:40 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_str.h"

/*
** This function allocates a new string, result of the concatenation of s1 and
** s2, then frees s1 and s2
**
** s1: A pointer to the first string to be copied
** s2: A pointer to the second string to be copied
**
** returns: The new string
**          NULL otherwise
*/

char			*ft_strjoindel(char *s1, char *s2)
{
	char		*result;
	size_t		len_s1;
	size_t		len_s2;
	size_t		size;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	size = len_s1 + len_s2;
	result = ft_strnew(size);
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1, (len_s1 + 1));
	ft_strlcpy(result + len_s1, s2, (len_s2 + 1));
	ft_strdel(&s1);
	ft_strdel(&s2);
	return (result);
}
