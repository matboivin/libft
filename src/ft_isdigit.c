/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:22:19 by mboivin           #+#    #+#             */
/*   Updated: 2019/11/20 17:55:43 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Recoded isdigit libc function: Checks if c is a numeric character
**
** c: A character
**
** returns: A non-zero integer if a character is a numeric character
**          Zero value otherwise
*/

int		ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
