/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 20:48:03 by mboivin           #+#    #+#             */
/*   Updated: 2019/06/26 21:14:33 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function allocates (with malloc(3)) and returns a “fresh” string ending
** with ’\0’. Each character of the string is initialized at ’\0’. If the
** allocation fails the function returns NULL.
*/

char		*ft_strnew(size_t size)
{
	char	*s;

	s = (char *)malloc(sizeof(*s) * size + 1);
	if (!s)
		return (NULL);
	s = ft_memset(s, '\0', size + 1);
	return (s);
}
