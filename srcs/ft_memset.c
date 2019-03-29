/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 19:23:45 by mboivin           #+#    #+#             */
/*   Updated: 2018/11/26 17:15:35 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Recoded memset libc function that copies the character c (an unsigned char)
** to the first n characters of the string pointed to, by the argument s. It
** returns a pointer to the memory area s.
*/

void	*ft_memset(void *s, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (len > 0)
	{
		*ptr++ = c;
		len--;
	}
	return (s);
}
