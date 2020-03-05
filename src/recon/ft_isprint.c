/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:22:29 by mboivin           #+#    #+#             */
/*   Updated: 2020/03/05 14:09:36 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Recoded isprint libc function: Checks if c is a printable character
**
** c: A character
**
** returns: A non-zero integer if c is a printable character
**          Zero value otherwise
*/

bool	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (true);
	return (false);
}
