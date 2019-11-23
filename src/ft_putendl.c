/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 15:21:39 by mboivin           #+#    #+#             */
/*   Updated: 2019/11/23 19:15:28 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function: Outputs the string c to the standard output, followed by a newline
**
** s: The string to output
*/

void	ft_putendl(char *s)
{
	if (s)
	{
		write(1, s, ft_strlen(s));
		write(1, "\n", 1);
	}
}
