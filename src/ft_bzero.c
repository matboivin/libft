/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:21:27 by mboivin           #+#    #+#             */
/*   Updated: 2019/11/05 17:54:08 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Recoded bzero libc function: erases the data in the n bytes of the memory
** starting at the location pointed to by s, by writing zeros
**
** s: an existing object to fill with zeroes
** n: the number of bytes to fill
*/

void				ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n--)
		*p++ = '\0';
}
