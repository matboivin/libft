/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_arr_len.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:23:49 by mboivin           #+#    #+#             */
/*   Updated: 2021/07/11 15:37:25 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_define.h"
#include "libft_str.h"

/*
** This function computes the length of an array of strings
** Empty strings are ignored
**
** arr: The array of strings whose length is to be found
**
** returns: The number of array elements
*/

size_t	ft_str_arr_len(const char **arr)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (arr && arr[i])
	{
		if (ft_strcmp(arr[i], EMPTY_STR))
			len++;
		i++;
	}
	return (len);
}
