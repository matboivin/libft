/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 22:07:41 by mboivin           #+#    #+#             */
/*   Updated: 2020/03/05 14:09:33 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Recoded islower libc function: Checks if c is a printable lower-case letter
**
** c: A character
**
** returns: A non-zero integer if c is a lower-case letter
**          Zero value otherwise
*/

bool	ft_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (true);
	return (false);
}
