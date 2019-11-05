/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:22:29 by mboivin           #+#    #+#             */
/*   Updated: 2019/11/05 17:54:34 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Recoded isprint libc function: checks if c is a printable character
**
** c: a character
**
** returns: a non-zero integer if a character is a printable character
**          zero value otherwise
*/

int		ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
