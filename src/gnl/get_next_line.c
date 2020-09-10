/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 17:40:12 by mboivin           #+#    #+#             */
/*   Updated: 2020/09/10 23:12:45 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function: Checks for a newline character in the content pointed to by store
** and updates the content of store and line
**
** store: Read content
** line: The value of what has been read
**
** returns: true if a newline character has been found
**          false otherwise
*/

static bool		ft_is_line(char **store, char **line)
{
	char		*found;
	size_t		end;
	size_t		len;

	len = 0;
	found = NULL;
	if ((found = ft_strchr(*store, '\n')))
	{
		end = found - *store;
		len = ft_strlen(found);
		*line = ft_substr(*store, 0, end);
		ft_strlcpy(*store, (found + 1), (len + 1));
		return (true);
	}
	return (false);
}

/*
** Function: Gets a line read from a file descriptor, without the newline
**
** fd: File descriptor for reading
** line: The value of what has been read
**
** returns: 1 if a line has been read
**          0 if EOF has been reached
**          -1 if an error happened
*/

int				get_next_line(int fd, char **line)
{
	int			bytes_read;
	char		buffer[BUFFER_SIZE + 1];
	static char	*store;

	if ((!line) || (fd < 0) || (BUFFER_SIZE < 1))
		return (-1);
	if (store && ft_is_line(&store, line))
		return (1);
	while ((bytes_read = read(fd, buffer, BUFFER_SIZE)) > 0)
	{
		buffer[bytes_read] = '\0';
		if (!(store = ft_strjoindelone(store, buffer)))
			return (-1);
		if (ft_is_line(&store, line))
			return (1);
	}
	if (store && *store)
	{
		*line = ft_strdup(store);
		bytes_read = 1;
	}
	else
		*line = NULL;
	ft_strdel(&store);
	return (bytes_read);
}
