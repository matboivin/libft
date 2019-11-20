/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iswhitespace.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 10:22:44 by mboivin           #+#    #+#             */
/*   Updated: 2019/11/20 17:56:28 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function: Checks if c is a whitespace character
**
** c: A character
**
** returns: A non-zero integer if a character is a whitespace character
**          Zero value otherwise
*/

int		ft_iswhitespace(int c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}
