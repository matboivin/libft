/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 19:21:49 by mboivin           #+#    #+#             */
/*   Updated: 2020/09/10 22:29:05 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** function: Allocates (with malloc(3)) and returns a “fresh” memory area
**
** size: The size of elements
**
** returns: The new memory area
**          NULL otherwise
*/

void		*ft_memalloc(size_t size)
{
	void	*p;

	p = malloc(size);
	if (!p)
		return (NULL);
	p = ft_memset(p, 0, size);
	return (p);
}
