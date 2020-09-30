/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prefix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 23:20:53 by mboivin           #+#    #+#             */
/*   Updated: 2020/09/30 14:59:51 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function: Checks if c is a prefix
**
** c: A character
**
** returns: A non-zero integer if c is a prefix
**          Zero value otherwise
*/

bool	ft_is_prefix(int c)
{
	return ((c == SPACE) || (c == PLUS) || (c == MINUS));
}
