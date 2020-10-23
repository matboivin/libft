/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrep.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/20 19:47:13 by mboivin           #+#    #+#             */
/*   Updated: 2020/10/23 23:57:40 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_str.h"

/*
** This function copies up to size − 1 characters from src to a new string,
** then frees src
**
** src: A pointer to the source string
** size: The size of the destination buffer
**
** returns: The new string
**          NULL otherwise
*/

char			*ft_strrep(char *src, int size)
{
	char		*result;
	int			i;

	if (!src || (size < 0))
		return (NULL);
	i = 0;
	result = ft_strnew(size);
	if (!result)
		return (NULL);
	while (src[i] && (i < size))
	{
		result[i] = src[i];
		i++;
	}
	result[i] = '\0';
	ft_strdel(&src);
	return (result);
}
