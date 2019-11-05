/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:21:50 by mboivin           #+#    #+#             */
/*   Updated: 2019/11/05 17:54:12 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Recoded isalnum libc function: checks if c is an alphanumeric character
**
** c: a character
**
** returns: a non-zero integer if a character is an alphanumeric character
**          zero value otherwise
*/

int		ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
