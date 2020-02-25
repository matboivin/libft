/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 16:33:47 by mboivin           #+#    #+#             */
/*   Updated: 2020/02/25 18:29:49 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function: Applies the function f to each character of the string given as
** argument to create a “fresh” new string (with malloc(3)) resulting from the
** successive applications of f.
**
** s: The string on which to iterate
** f: The function to apply to each character
**
** returns: The string created from the successive applications of f
**          NULL otherwise
*/

char		*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*result;

	i = 0;
	if (s && f)
	{
		result = ft_memalloc(ft_strlen(s) + 1);
		if (result == NULL)
			return (NULL);
		while (s[i])
		{
			result[i] = f(s[i]);
			i++;
		}
		return (result);
	}
	return (NULL);
}
