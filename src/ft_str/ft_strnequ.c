/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 11:35:36 by mboivin           #+#    #+#             */
/*   Updated: 2020/07/31 23:45:53 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function lexicographically compares s1 and s2 up to n characters or
** until a ’\0’ is reached. If the two strings are identical the function
** returns 1, else zero value is returned.
*/

int		ft_strnequ(const char *s1, const char *s2, size_t n)
{
	if ((s1 == NULL )|| (s2 == NULL))
		return (0);
	return (ft_strncmp(s1, s2, n) == 0);
}
