/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 10:37:21 by mboivin           #+#    #+#             */
/*   Updated: 2019/11/08 18:42:05 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

/*
** Function: outputs the string c to the standard output
**
** s: the string to output
*/

void	ft_putstr(char const *s)
{
	if (s)
		write(1, s, ft_strlen(s));
}
