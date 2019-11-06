/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iswhitespace.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 10:22:44 by mboivin           #+#    #+#             */
/*   Updated: 2019/11/06 17:17:25 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function: checks if c is a whitespace character
**
** c: a character
**
** returns: a non-zero integer if a character is a whitespace character
**          zero value otherwise
*/

int		ft_iswhitespace(int c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}
