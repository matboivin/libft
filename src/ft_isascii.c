/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 10:18:28 by mboivin           #+#    #+#             */
/*   Updated: 2018/11/22 10:19:43 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Recoded isascii libc function that returns a non-zero integer if a character
** passed as an argument is a 7-bit US-ASCII character code between 0 and octal
** 0177 inclusive, else zero value is returned.
*/

int		ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
