/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fgetc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 11:51:22 by mboivin           #+#    #+#             */
/*   Updated: 2020/10/08 13:44:12 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function reads the next character from stream and returns it as an
** unsigned char cast to an int
**
** stream: An open file
**         Refer to libft_files.h
**
** returns: The character read cast to an int
**          EOF on end of file or error
*/

int					ft_fgetc(t_file *stream)
{
	unsigned char	c;
	size_t			bytes_read;

	if (ft_fileno(stream) != -1)
	{
		bytes_read = read(stream->fd, stream->buffer, 1);
		stream->buffer[bytes_read] = '\0';
		if (bytes_read == 1)
		{
			c = *(stream->buffer);
			stream->head = stream->buffer;
			stream->count += bytes_read;
			return ((int)c);
		}
	}
	return (FT_EOF);
}
