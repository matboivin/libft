/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 10:22:44 by mboivin           #+#    #+#             */
/*   Updated: 2020/03/05 14:09:40 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Recoded isspace libc function: Checks if c is a space character
**
** c: A character
**
** returns: A non-zero integer if c is a space character
**          Zero value otherwise
*/

bool	ft_isspace(int c)
{
	if (c == ' ' || c == '\f' || c == '\t' \
		|| c == '\v' || c == '\n' || c == '\r')
		return (true);
	return (false);
}
