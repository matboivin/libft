/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 20:52:25 by mboivin           #+#    #+#             */
/*   Updated: 2020/10/06 22:40:57 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function sets every character of the string to the value ’\0’
*/

void	ft_strclr(char *s)
{
	if (s)
		while (*s)
			*(s++) = '\0';
}
