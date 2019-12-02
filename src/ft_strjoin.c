/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 11:25:33 by mboivin           #+#    #+#             */
/*   Updated: 2019/12/02 23:37:27 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function: Allocates (with malloc(3)) and returns a new string, result of the
** concatenation of s1 and s2
**
** s1: The prefix string
** s2: The suffix string
**
** returns: The new string
**          NULL otherwise
*/

char		*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*concatstr;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(concatstr = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	ft_strcpy(concatstr, s1);
	ft_strcat(concatstr, s2);
	return (concatstr);
}
