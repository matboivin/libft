/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpushc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 19:13:00 by mboivin           #+#    #+#             */
/*   Updated: 2020/11/15 19:36:49 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_str.h"

/*
** This function allocates a new string, result of the concatenation of s and c,
** then frees s. It can be used to read a string char by char.
**
** s: A pointer to the string
** c: A pointer to the char to add
**
** returns: The new string
**          NULL otherwise
*/

char		*ft_strpushc(char *s, char **c)
{
	char	*result;
	size_t	len_s;
	size_t	len;

	len_s = 0;
	if (s)
		len_s = ft_strlen(s);
	len = len_s + 1;
	result = ft_strnew(len);
	if (!result)
		return (NULL);
	if (s)
	{
		ft_strlcpy(result, s, (len_s + 1));
		ft_strdel(&s);
	}
	ft_strlcpy(result + len_s, *c, 2);
	(*c)++;
	return (result);
}
