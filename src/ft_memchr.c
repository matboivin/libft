/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 18:26:35 by mboivin           #+#    #+#             */
/*   Updated: 2019/06/24 23:15:07 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Recoded memchr libc function that scans the initial n bytes of the memory
** area pointed to by s for the first instance of c.
*/

void				*ft_memchr(void const *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	uc;

	i = 0;
	uc = (unsigned char)c;
	p = (unsigned char *)s;
	while (n--)
	{
		if (p[i] == uc)
			return (p + i);
		i++;
	}
	return (NULL);
}
