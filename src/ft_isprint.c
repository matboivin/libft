/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 10:21:08 by mboivin           #+#    #+#             */
/*   Updated: 2018/11/22 10:21:58 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Recoded isprint libc function that returns a non-zero integer if a character
** passed as an argument is a printable character, else zero value is returned.
*/

int		ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
