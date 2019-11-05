/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:23:18 by mboivin           #+#    #+#             */
/*   Updated: 2019/11/05 19:11:29 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Recoded memset libc function: writes len bytes of value c to string s
**
** s: a pointer to the block of memory to fill
** c: the value to be set
** len: the number of bytes to be set to the value
**
** returns: a pointer to the memory area s
*/

void				*ft_memset(void *s, int c, size_t len)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (len--)
		*p++ = c;
	return (s);
}
