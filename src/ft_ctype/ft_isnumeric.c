/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnumeric.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 00:23:51 by mboivin           #+#    #+#             */
/*   Updated: 2020/11/06 14:35:38 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft_ctype.h"

/*
** This function checks if a string has only numeric characters
**
** s: A character
**
** returns: A non-zero integer if s has only numeric characters
**          0 otherwise
*/

int			ft_isnumeric(char *s)
{
	size_t	i;
	int		retval;

	i = 0;
	retval = 1;
	while (s[i])
	{
		if (!(retval = ft_isdigit(s[i])))
			break ;
		i++;
	}
	return (retval);
}
