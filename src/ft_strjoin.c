/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 11:25:33 by mboivin           #+#    #+#             */
/*   Updated: 2019/11/19 12:36:47 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function: allocates (with malloc(3)) and returns a new string, result of the
** concatenation of s1 and s2
**
** s1: the prefix string
** s2: the suffix string
**
** returns: the new string
**          NULL otherwise
*/

char		*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*concatstr;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(concatstr = (char *)malloc(sizeof(*concatstr) * (len + 1))))
		return (NULL);
	ft_strcpy(concatstr, s1);
	ft_strcat(concatstr, s2);
	return (concatstr);
}
