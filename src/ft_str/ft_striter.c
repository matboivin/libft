/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 21:43:05 by mboivin           #+#    #+#             */
/*   Updated: 2020/09/10 23:08:48 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function applies the function f to each character of the string passed
** as argument. Each character is passed by address to f to be modified if
** necessary.
*/

void	ft_striter(char *s, void (*f)(char *))
{
	if (!s || !f)
		return ;
	while (*s)
		f(s++);
}
