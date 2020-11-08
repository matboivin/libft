/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strreplace.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/20 19:47:13 by mboivin           #+#    #+#             */
/*   Updated: 2020/11/08 19:44:11 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_str.h"

/*
** This function duplicates a string, then frees it
**
** s: A pointer to the source string
**
** returns: The new string
**          NULL otherwise
*/

char		*ft_strreplace(char *s)
{
	char	*result;

	if (!s)
		return (NULL);
	result = ft_strdup(s);
	ft_strdel(&s);
	return (result);
}
