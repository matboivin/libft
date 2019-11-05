/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:22:19 by mboivin           #+#    #+#             */
/*   Updated: 2019/11/05 17:54:27 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Recoded isdigit libc function: checks if c is a numeric character
**
** c: a character
**
** returns: a non-zero integer if a character is a numeric character
**          zero value otherwise
*/

int		ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
