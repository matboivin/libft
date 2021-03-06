/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 20:48:03 by mboivin           #+#    #+#             */
/*   Updated: 2021/04/15 18:40:31 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_mem.h"
#include "libft_str.h"

/*
** This function allocates (with malloc(3)) and returns a “fresh” string ending
** with ’\0’. Each character of the string is initialized at ’\0’
**
** size: The length of the string
**
** returns: The new string
**          NULL otherwise
*/

char	*ft_strnew(size_t size)
{
	char	*result;

	result = NULL;
	result = malloc(sizeof(char) * (size + 1));
	if (!result)
		return (NULL);
	ft_bzero(result, size + 1);
	return (result);
}
