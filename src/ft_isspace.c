/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 10:22:44 by mboivin           #+#    #+#             */
/*   Updated: 2019/11/06 17:17:01 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Recoded isspace libc function: checks if c is a space character
**
** c: a character
**
** returns: a non-zero integer if a character is a space character
**          zero value otherwise
*/

int		ft_isspace(int c)
{
	return (c == ' ' || c == '\f' || c == '\t' \
		|| c == '\v' || c == '\n' || c == '\r');
}
