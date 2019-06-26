/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 18:36:50 by mboivin           #+#    #+#             */
/*   Updated: 2019/06/26 21:13:30 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Recoded strdup libc function that creates a duplicate of the string pointed
** to by src, and returns a pointer to the new copy. It allocates the memory for
** the new string by calling malloc().
*/

char		*ft_strdup(char const *src)
{
	size_t	len;
	char	*s;

	len = ft_strlen(src);
	if (!(s = (char *)malloc(sizeof(*s) * len + 1)))
		return (NULL);
	s = ft_strcpy(s, src);
	return (s);
}
