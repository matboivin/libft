/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 18:36:50 by mboivin           #+#    #+#             */
/*   Updated: 2018/11/27 10:40:21 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char const *src)
{
	size_t	len;
	char	*s;

	len = ft_strlen(src);
	if (!(s = (char *)malloc(sizeof(*s) * len + 1)))
		return (NULL);
	s = ft_strcpy(s, src);
	return (s);
}
