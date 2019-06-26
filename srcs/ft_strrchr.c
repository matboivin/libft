/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 11:41:37 by mboivin           #+#    #+#             */
/*   Updated: 2019/06/26 21:15:04 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Recoded strrchr libc function that searches for the last occurrence of the
** character c (an unsigned char) in the string pointed to, by the argument s.
*/

char		*ft_strrchr(char const *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (*(s + i) != (char)c && i > 0)
		i--;
	if (*(s + i) == (char)c)
		return ((char *)(s + i));
	return (NULL);
}
