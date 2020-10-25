/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:21:59 by mboivin           #+#    #+#             */
/*   Updated: 2020/10/25 21:35:39 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_ctype.h"

/*
** Recoded isalpha libc function: Checks if c is an alphabet character
**
** c: A character
**
** returns: A non-zero integer if c is an alphabet character
**          0 otherwise
*/

bool	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
