/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 21:43:05 by mboivin           #+#    #+#             */
/*   Updated: 2020/07/31 23:43:18 by mboivin          ###   ########.fr       */
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
	if ((s == NULL) || (f == NULL))
		return ;
	while (*s)
		f(s++);
}
