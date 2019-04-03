/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 11:35:36 by mboivin           #+#    #+#             */
/*   Updated: 2018/11/27 18:48:02 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function lexicographically compares s1 and s2 up to n characters or
** until a ’\0’ is reached. If the two strings are identical the function
** returns 1, else zero value is returned.
*/

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (!s1 || !s2)
		return (0);
		return (ft_strncmp(s1, s2, n) == 0);
}
