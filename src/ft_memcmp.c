/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 18:29:38 by mboivin           #+#    #+#             */
/*   Updated: 2019/06/26 21:23:53 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Recoded memcmp libc function that compares the first n bytes of the object
** pointed to by s1 to the first n bytes of the object pointed to by s2. It
** returns an integer greater than, equal to, or less than 0, if the object
** pointed to by s1 is greater than, equal to, or less than the object pointed
** to by s2, respectively.
*/

int					ft_memcmp(void const *s1, void const *s2, size_t n)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	if (!s1 && !s2)
		return (0);
	i = 0;
	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}
