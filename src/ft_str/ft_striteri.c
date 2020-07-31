/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 16:24:41 by mboivin           #+#    #+#             */
/*   Updated: 2020/07/31 23:43:29 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function applies the function f to each character of the string passed
** as argument, and passing its index as first argument. Each character is
** passed by address to f to be modified if necessary.
*/

void		ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	if ((s == NULL) || (f == NULL))
		return ;
	while (s && s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
