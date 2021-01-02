/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:22:19 by mboivin           #+#    #+#             */
/*   Updated: 2021/01/02 21:50:48 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_ctype.h"

/*
** Recoded isdigit libc function: Checks if c is a numeric character
**
** c: A character
**
** returns: A non-zero integer if c is a numeric character
**          0 otherwise
*/

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
