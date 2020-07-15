/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isinrange.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 18:59:17 by mboivin           #+#    #+#             */
/*   Updated: 2020/07/15 12:34:55 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function: Checks whether a number is in a given range
**
** c: A number
** start: Range start
** end: Range end
**
** returns: A non-zero integer if c is in the range
**          Zero value otherwise
*/

int		ft_isinrange(int x, int start, int end)
{
	return (x >= start && x <= end);
}
