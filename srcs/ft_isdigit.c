/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 10:19:59 by mboivin           #+#    #+#             */
/*   Updated: 2018/11/22 10:20:54 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Recoded isdigit libc function that returns a non-zero integer if a character
** passed as an argument is a numeric character, else zero value is returned.
*/

int		ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
