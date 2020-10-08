/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fileno.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 11:36:15 by mboivin           #+#    #+#             */
/*   Updated: 2020/10/08 11:44:38 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function examines the argument stream and returns its integer descriptor
** In case the stream is not valid, returns -1 and sets errno to EBADF
**
** stream: An open file
**         Refer to libft_files.h
**
** returns: The integer file descriptor associated with the named stream
**          -1 if an error happened
*/

int		ft_fileno(t_file *stream)
{
	if (!stream)
	{
		errno = EBADF;
		return (-1);
	}
	return (stream->fd);
}
