/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 11:25:33 by mboivin           #+#    #+#             */
/*   Updated: 2020/10/23 23:57:40 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_str.h"

/*
** This function allocates (with malloc(3)) and returns a new string, result of
** the concatenation of s1 and s2
**
** s1: The prefix string
** s2: The suffix string
**
** returns: The new string
**          NULL otherwise
*/

char		*ft_strjoin(const char *s1, const char *s2)
{
	size_t	len;
	char	*result;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	result = ft_strnew(len);
	if (!result)
		return (NULL);
	ft_strncpy(result, s1, (len + 1));
	ft_strncat(result, s2, (len + 1));
	return (result);
}
