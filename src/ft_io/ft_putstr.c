/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 10:37:21 by mboivin           #+#    #+#             */
/*   Updated: 2021/07/11 15:35:47 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_str.h"
#include "libft_io.h"

/*
** This function outputs the string s to the standard output
**
** s: The string to output
*/

void	ft_putstr(const char *s)
{
	if (s)
		write(STDOUT_FILENO, s, ft_strlen(s));
}
