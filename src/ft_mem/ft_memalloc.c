/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 19:21:49 by mboivin           #+#    #+#             */
/*   Updated: 2021/04/15 18:42:14 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_mem.h"

/*
** This function allocates (with malloc(3)) and returns a “fresh” memory area
**
** size: The size of elements
**
** returns: The new memory area
**          NULL otherwise
*/

void	*ft_memalloc(size_t size)
{
	void	*result;

	result = NULL;
	result = malloc(size);
	if (!result)
		return (NULL);
	result = ft_memset(result, 0, size);
	return (result);
}
