/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:23:25 by mboivin           #+#    #+#             */
/*   Updated: 2019/11/05 19:14:07 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Recoded strchr libc function: locates the first occurrence of c in the string
** pointed to by s
**
** s: the string to be scanned
** c: the character to be searched
**
** returns: a pointer to the located character
**          NULL otherwise
*/

char	*ft_strchr(char const *s, int c)
{
	while (*s && *s != (char)c)
		s++;
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}
