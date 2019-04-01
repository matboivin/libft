/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 17:43:57 by mboivin           #+#    #+#             */
/*   Updated: 2018/11/26 15:22:17 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function allocates (with malloc(3)) and returns a “fresh” substring
** from the string given as argument. The substring begins at index start and is
** of size len. If start and len aren’t refering to a valid substring, the
** behavior is undefined. If the allocation fails, the function returns NULL.
*/

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	if (!s)
		return (NULL);
	if (!(str = (char*)malloc(sizeof(*str) * len + 1)))
		return (NULL);
	while (len > 0)
	{
		str[i] = s[start + i];
		i++;
		len--;
	}
	str[i] = '\0';
	return (str);
}
