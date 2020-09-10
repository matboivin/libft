/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atos.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 12:41:45 by mboivin           #+#    #+#             */
/*   Updated: 2020/09/10 22:16:40 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function: Converts a single char to a string
**
** c: A char
**
** returns: The converted char as a string representation
**          Zero value otherwise
*/

char		*ft_atos(char c)
{
	char	*result;

	result = ft_strnew(1);
	if (!result)
		return (NULL);
	result = ft_memset(result, c, 1);
	return (result);
}
