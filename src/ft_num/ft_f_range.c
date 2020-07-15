/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_f_range.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 18:59:17 by mboivin           #+#    #+#             */
/*   Updated: 2020/07/15 15:56:26 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function: Checks whether a double is in a given range
**
** x: A number
** start: Range start
** end: Range end
**
** returns: A non-zero integer if x is in the range
**          Zero value otherwise
*/

int		ft_f_range(double x, double start, double end)
{
	return (x >= start && x <= end);
}
