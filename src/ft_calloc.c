/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:21:34 by mboivin           #+#    #+#             */
/*   Updated: 2019/11/19 11:49:33 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Recoded calloc libc function: allocates enough space for count objects that
** are size bytes of memory each
**
** count: the number of elements to be allocated
** size: the size of elements
**
** returns: a pointer to the allocated memory filled with bytes of value zero
**          NULL otherwise
*/

void				*ft_calloc(size_t count, size_t size)
{
	void			*arr;
	unsigned char	*p;

	arr = malloc(count * size);
	if (!arr)
		return (NULL);
	p = (unsigned char *)arr;
	while (count--)
		*p++ = '\0';
	return (arr);
}
