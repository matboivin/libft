/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 22:10:09 by mboivin           #+#    #+#             */
/*   Updated: 2020/03/05 14:09:43 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Recoded isupper libc function: Checks if c is a printable upper-case letter
**
** c: A character
**
** returns: A non-zero integer if c is an upper-case letter
**          Zero value otherwise
*/

bool	ft_islower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (true);
	return (false);
}
