/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 10:37:21 by mboivin           #+#    #+#             */
/*   Updated: 2019/11/23 19:15:55 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

/*
** Function: Outputs the string c to the standard output
**
** s: The string to output
*/

void	ft_putstr(char *s)
{
	if (s)
		write(1, s, ft_strlen(s));
}
