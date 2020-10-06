/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 10:35:55 by mboivin           #+#    #+#             */
/*   Updated: 2020/10/06 22:36:42 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function outputs the character c to the standard output
**
** c: The character to output
*/

void	ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, 1);
}
