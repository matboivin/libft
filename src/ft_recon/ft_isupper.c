/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 22:10:09 by mboivin           #+#    #+#             */
/*   Updated: 2020/10/23 23:56:12 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_recon.h"

/*
** Recoded isupper libc function: Checks if c is a printable upper-case letter
**
** c: A character
**
** returns: A non-zero integer if c is an upper-case letter
**          0 otherwise
*/

bool	ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
