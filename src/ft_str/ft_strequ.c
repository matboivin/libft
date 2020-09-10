/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 11:14:24 by mboivin           #+#    #+#             */
/*   Updated: 2020/09/10 23:08:35 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function lexicographically compares s1 and s2. If the two strings are
** identical the function returns 1, else zero value is returned.
*/

int		ft_strequ(const char *s1, const char *s2)
{
	if (!s1 || !s2)
		return (0);
	return (ft_strcmp(s1, s2) == 0);
}
