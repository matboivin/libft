/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 16:48:25 by mboivin           #+#    #+#             */
/*   Updated: 2019/11/20 18:13:14 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function: Applies the function f to each character of the string passed as
** argument to create a new string (with malloc(3)) resulting from successive
** applications of f
**
** s: The string on which to iterate
** f: The function to apply to each character
**
** returns: The string created from the successive applications of f
**          NULL otherwise
*/

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*str;

	if (s && f)
	{
		i = 0;
		if (!(str = ft_memalloc(ft_strlen(s) + 1)))
			return (NULL);
		while (s[i])
		{
			str[i] = f(i, s[i]);
			i++;
		}
		return (str);
	}
	return (NULL);
}
