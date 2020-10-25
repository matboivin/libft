/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 22:07:41 by mboivin           #+#    #+#             */
/*   Updated: 2020/10/25 21:35:39 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_ctype.h"

/*
** Recoded islower libc function: Checks if c is a printable lower-case letter
**
** c: A character
**
** returns: A non-zero integer if c is a lower-case letter
**          0 otherwise
*/

bool	ft_islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
