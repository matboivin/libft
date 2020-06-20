/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrep.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/20 19:47:13 by mboivin           #+#    #+#             */
/*   Updated: 2020/06/20 22:53:21 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function: Copies up to size − 1 characters from src to a new string,
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

	if (!src || size < 0)
		return (NULL);
	i = 0;
	result = ft_strnew(size);
	if (result == NULL)
		return (NULL);
	while (src[i] && i < size)
	{
		result[i] = src[i];
		i++;
	}
	result[i] = '\0';
	ft_strdel(&src);
	return (result);
}
