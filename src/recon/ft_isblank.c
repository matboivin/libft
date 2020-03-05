/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isblank.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 10:22:44 by mboivin           #+#    #+#             */
/*   Updated: 2020/03/05 14:09:18 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function: Checks if c is a space or tab character
**
** c: A character
**
** returns: A non-zero integer if c is a space or tab character
**          Zero value otherwise
*/

bool	ft_isblank(int c)
{
	if (c == ' ' || c == '\t')
		return (true);
	return (false);
}
