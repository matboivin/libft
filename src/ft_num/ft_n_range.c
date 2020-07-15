/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_n_range.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 18:59:17 by mboivin           #+#    #+#             */
/*   Updated: 2020/07/15 15:55:12 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function: Checks whether an integer is in a given range
**
** x: A number
** start: Range start
** end: Range end
**
** returns: A non-zero integer if x is in the range
**          Zero value otherwise
*/

int		ft_n_range(int x, int start, int end)
{
	return (x >= start && x <= end);
}
