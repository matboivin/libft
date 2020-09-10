/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_prefix.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 23:20:53 by mboivin           #+#    #+#             */
/*   Updated: 2020/09/10 23:51:56 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function: Allocates a new string, adding the required prefix to s
**
** s: A pointer to the string to be prefixed
** spec: A structure containing the retrieved formatting data
**
** returns: The new string
**          NULL otherwise
*/

char		*ft_add_prefix(char *s, t_spec *spec)
{
	char	*result;

	result = NULL;
	if (spec->type == 'p' || spec->type == 'x')
		result = ft_strprepend(LOWHEX_PREFIX, s);
	else if (spec->type == 'X')
		result = ft_strprepend(UPHEX_PREFIX, s);
	else if (spec->type == 'o')
		result = ft_strprepend(OCT_PREFIX, s);
	else if (spec->type == 'd' || spec->type == 'i')
	{
		if (spec->flag & PLUS)
			result = ft_strprepend("+", s);
		else if (spec->flag & SPACE)
			result = ft_strprepend(" ", s);
	}
	return (result);
}
