/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 17:40:12 by mboivin           #+#    #+#             */
/*   Updated: 2020/05/01 14:38:18 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function: Allocates a new string, result of the concatenation of s1 and s2,
** frees the first pointer if it exists
**
** s1: A pointer to the destination string
** s2: A pointer to the source string
**
** returns: The new string
**          NULL otherwise
*/

static char		*ft_strjoin_gnl(char *s1, char *s2)
{
	char		*result;
	size_t		len_s1;
	size_t		len_s2;
	size_t		len;

	len_s1 = 0;
	len_s2 = ft_strlen(s2);
	if (s1)
		len_s1 = ft_strlen(s1);
	len = len_s1 + len_s2;
	result = (char *)malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	if (s1)
	{
		ft_strlcpy(result, s1, (len_s1 + 1));
		ft_strdel(&s1);
	}
	ft_strlcpy(result + len_s1, s2, (len_s2 + 1));
	return (result);
}

/*
** Function: Checks for a newline character in the content pointed to by store
** and updates the content of store and line
**
** store: Read content
** line: The value of what has been read
**
** returns: 1 if a newline character has been found
**          0 otherwise
*/

static int		is_line(char **store, char **line)
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
		return (1);
	}
	return (0);
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

	if (!line || fd < 0 || BUFFER_SIZE < 1)
		return (-1);
	if (store && is_line(&store, line))
		return (1);
	while ((bytes_read = read(fd, buffer, BUFFER_SIZE)) > 0)
	{
		buffer[bytes_read] = '\0';
		if (!(store = ft_strjoin_gnl(store, buffer)))
			return (-1);
		if (is_line(&store, line))
			return (1);
	}
	if (store && *store)
		*line = ft_strdup(store);
	else
		*line = ft_strdup("");
	ft_strdel(&store);
	return (bytes_read);
}
