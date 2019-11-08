/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 15:05:45 by mboivin           #+#    #+#             */
/*   Updated: 2019/11/08 18:38:39 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function: outputs the character c to given file descriptor
**
** c: the character to output
** fd: the file descriptor on which to write
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
