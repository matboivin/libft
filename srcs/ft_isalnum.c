/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 10:12:47 by mboivin           #+#    #+#             */
/*   Updated: 2018/11/22 10:16:15 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Recoded isalnum libc function that returns a non-zero integer if a character
** passed as an argument is an alphanumeric character, else zero value is
** returned.
*/

int		ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
