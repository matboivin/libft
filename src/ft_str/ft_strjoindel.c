/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoindel.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 15:16:05 by mboivin           #+#    #+#             */
/*   Updated: 2020/11/09 20:50:21 by mboivin          ###   ########.fr       */
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

char		*ft_strjoindel(char *s1, char *s2)
{
	char	*result;

	if (!s1 || !s2)
		return (NULL);
	result = ft_strjoin(s1, s2);
	if (!result)
		return (NULL);
	ft_strdel(&s1);
	ft_strdel(&s2);
	return (result);
}
