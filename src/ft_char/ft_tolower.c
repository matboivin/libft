/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:24:21 by mboivin           #+#    #+#             */
/*   Updated: 2020/10/23 23:24:12 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_char.h"

/*
** Recoded tolower libc function: Converts an upper-case letter to the
** corresponding lower-case letter
**
** c: A character
**
** returns: The corresponding lower-case letter
**          Otherwise the argument is returned unchanged
*/

int		ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
