/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isblank.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 10:22:44 by mboivin           #+#    #+#             */
/*   Updated: 2020/10/23 23:55:11 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_recon.h"

/*
** This function checks if c is a space or tab character
**
** c: A character
**
** returns: A non-zero integer if c is a space or tab character
**          0 otherwise
*/

bool	ft_isblank(int c)
{
	return ((c == ' ') || (c == '\t'));
}
