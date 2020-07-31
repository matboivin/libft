/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iscntrl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 22:14:33 by mboivin           #+#    #+#             */
/*   Updated: 2020/07/31 23:53:08 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Recoded iscntrl libc function: Checks if c is a control character
**
** c: A character
**
** returns: A non-zero integer if c is a control character
**          Zero value otherwise
*/

bool	ft_iscntrl(int c)
{
	return ((c >= 0 && c <= 31) || (c == 127));
}
