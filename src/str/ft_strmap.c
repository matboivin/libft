/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 16:33:47 by mboivin           #+#    #+#             */
/*   Updated: 2019/11/20 18:13:04 by mboivin          ###   ########.fr       */
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
	char	*str;

	i = 0;
	if (s && f)
	{
		if (!(str = ft_memalloc(ft_strlen(s) + 1)))
			return (NULL);
		while (s[i])
		{
			str[i] = f(s[i]);
			i++;
		}
		return (str);
	}
	return (NULL);
}
