/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnumeric.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 00:23:51 by mboivin           #+#    #+#             */
/*   Updated: 2021/07/11 15:33:35 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft_define.h"
#include "libft_ctype.h"

/*
** This function checks if a string is a numeric value
**
** s: A string representation of a number
**
** returns: A non-zero integer if s is a numeric value
**          0 otherwise
*/

int	ft_isnumeric(const char *s)
{
	size_t	i;
	int		ret;

	i = 0;
	ret = 0;
	if ((s[i] == '+') || (s[i] == '-'))
		i++;
	while (s[i])
	{
		ret = ft_isdigit(s[i]);
		if (!ret)
			break ;
		i++;
	}
	return (ret);
}
