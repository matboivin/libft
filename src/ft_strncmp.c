/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 18:52:22 by mboivin           #+#    #+#             */
/*   Updated: 2019/06/26 21:14:11 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Recoded strncmp libc function that compares at most n characters of the
** string pointed to, by s1 to the string pointed to by s2. The comparison is
** done lexicographically.
** Return value is < 0 to indicate s1 is less than s2,
** > 0 to indicate s2 is less than s1,
** = 0 to indicate s1 is equal to s2.
*/

int			ft_strncmp(char const *s1, char const *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < (n - 1))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
