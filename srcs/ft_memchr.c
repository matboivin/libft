/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 18:26:35 by mboivin           #+#    #+#             */
/*   Updated: 2018/11/26 15:54:37 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Recoded memchr libc function that scans the initial n bytes of the memory
** area pointed to by s for the first instance of c.
*/

void	*ft_memchr(void const *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	uc;

	i = 0;
	uc = (unsigned char)c;
	ptr = (unsigned char *)s;
	while (n > 0)
	{
		if (ptr[i] == uc)
			return (ptr + i);
		i++;
		n--;
	}
	return (NULL);
}
