/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:21:34 by mboivin           #+#    #+#             */
/*   Updated: 2020/10/23 23:46:26 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_mem.h"

/*
** Recoded realloc libc function: Deallocates the object pointed to by ptr and
** returns a pointer to a new object that has the size specified by size. The
** contents of the new object is identical to that of the old object.
**
** ptr: The old object to be deallocated
** size: The size of the new object
**
** returns: A pointer to the new object
**          If ptr is a NULL pointer, returns an allocated object of the
**          specified size
*/

void		*ft_realloc(void *ptr, size_t size)
{
	void	*result;

	result = NULL;
	if (!ptr)
	{
		result = ft_memalloc(size);
		if (!result)
			return (NULL);
	}
	else
	{
		result = ft_memalloc(size);
		if (!result)
			return (NULL);
		result = ft_memmove(result, ptr, size);
	}
	ft_memdel(&ptr);
	return (result);
}
