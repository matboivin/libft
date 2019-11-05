/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:24:21 by mboivin           #+#    #+#             */
/*   Updated: 2019/11/05 19:51:01 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Recoded tolower libc function: converts an upper-case letter to the
** corresponding lower-case letter
**
** c: a character
**
** returns: the corresponding lower-case letter
**          otherwise the argument is returned unchanged
*/

int		ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
