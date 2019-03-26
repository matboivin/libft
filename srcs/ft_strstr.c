/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 14:19:35 by mboivin           #+#    #+#             */
/*   Updated: 2018/11/27 19:05:57 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char const *s, char const *needle)
{
	size_t	i;
	size_t	j;
	char	*ptr;
	char	*tmp;

	i = 0;
	j = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)s);
	ptr = (char *)s;
	tmp = (char *)needle;
	while (ptr[i])
	{
		while (tmp[j] && ptr[i + j] == tmp[j])
			j++;
		if (tmp[j] == '\0')
			return ((char *)(ptr + i));
		j = 0;
		i++;
	}
	return (NULL);
}
