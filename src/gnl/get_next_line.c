/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 17:40:12 by mboivin           #+#    #+#             */
/*   Updated: 2020/02/25 17:55:12 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function: Allocates (with malloc(3)), frees the first pointer if it exists,
** and returns a new string, result of the concatenation of dst and src
**
** tmp: A pointer to the destination string
** buff: A pointer to the source string
**
** returns: The new string
**          NULL otherwise
*/

static char		*ft_strjoindel(char *tmp, char *buff)
{
	char		*concatstr;
	size_t		i;
	size_t		len_buff;

	i = 0;
	len_buff = ft_strlen(buff);
	if (tmp)
		i = ft_strlen(tmp);
	concatstr = ft_strnew(i + len_buff);
	if (!concatstr)
		return (NULL);
	if (tmp)
	{
		ft_memcpy(concatstr, tmp, i);
		ft_strdel(&tmp);
	}
	ft_memcpy(concatstr + i, buff, len_buff);
	return (concatstr);
}

/*
** function: Checks for a newline character in the content pointed to by tmp
** and updates the content of tmp and line
**
** tmp: Read content
** line: The value of what has been read
**
** returns: 1 if a newline character has been found
**          0 otherwise
*/

static int		is_line(char **tmp, char **line)
{
	char		*found;
	size_t		end;

	if (!(found = ft_strchr(*tmp, '\n')))
		return (0);
	end = found - *tmp;
	*line = ft_substr(*tmp, 0, end);
	ft_strcpy(*tmp, (found + 1));
	return (1);
}

/*
** function: Gets a line read from a file descriptor, without the newline
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
	char		buff[BUFFER_SIZE + 1];
	static char	*tmp;

	if (!line || fd < 0 || BUFFER_SIZE < 1)
		return (-1);
	if (tmp && is_line(&tmp, line))
		return (1);
	while ((bytes_read = read(fd, buff, BUFFER_SIZE)) > 0)
	{
		buff[bytes_read] = '\0';
		if (!(tmp = ft_strjoindel(tmp, buff)))
			return (-1);
		if (is_line(&tmp, line))
			return (1);
	}
	if (bytes_read == -1 || bytes_read == 0)
		*line = NULL;
	if (tmp && *tmp)
	{
		*line = ft_strdup(tmp);
		ft_strdel(&tmp);
		return (1);
	}
	return (bytes_read);
}
