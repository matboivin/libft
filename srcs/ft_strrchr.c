/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 11:41:37 by mboivin           #+#    #+#             */
/*   Updated: 2018/11/26 16:02:46 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Recoded strrchr libc function that searches for the last occurrence of the
** character c (an unsigned char) in the string pointed to, by the argument s.
*/

char	*ft_strrchr(char const *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (*(s + i) != (char)c && i > 0)
		i--;
	if (*(s + i) == (char)c)
		return ((char *)(s + i));
	return (NULL);
}
