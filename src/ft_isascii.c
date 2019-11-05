/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:22:09 by mboivin           #+#    #+#             */
/*   Updated: 2019/11/05 17:54:20 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Recoded isascii libc function: checks if c is a 7-bit US-ASCII character
** code between 0 and octal 0177 inclusive
**
** c: a character
**
** returns: a non-zero integer if a character is an ASCII character
**          zero value otherwise
*/

int		ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
