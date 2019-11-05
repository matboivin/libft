/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:24:12 by mboivin           #+#    #+#             */
/*   Updated: 2019/11/05 19:49:25 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Recoded strrchr libc function: locates the last occurrence of c in the
** string pointed to by s
**
** s: the string to be scanned
** c: the character to be searched
**
** returns: a pointer to the located character
**          NULL otherwise
*/

char		*ft_strrchr(char const *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (*(s + i) != (char)c && i > 0)
		i--;
	if (*(s + i) == (char)c)
		return ((char *)(s + i));
	return (NULL);
}
