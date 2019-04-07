/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 17:40:12 by mboivin           #+#    #+#             */
/*   Updated: 2019/04/03 17:20:28 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function allocates and returns a “fresh” memory area to join the
** s1 (tmp) and s2 (buffer) contents. Then it frees the first pointer if it
** exists, and returns the string resulting from the concatenation of s1 and s2.
*/

static char		*strjoindel(char *s1, char *s2)
{
	size_t	i;
	size_t	j;
	char	*s;

	i = 0;
	j = ft_strlen(s2);
	if (s1)
		i = ft_strlen(s1);
	if (!(s = ft_strnew(i + j)))
		return (NULL);
	if (s1)
	{
		ft_memcpy(s, s1, i);
		ft_strdel(&s1);
	}
	ft_memcpy(s + i, s2, j);
	return (s);
}

/*
** This function checks for newline character in the content pointed to by tmp.
** nl is a pointer to the first occurence of a newline character.
** If nl is not NULL, the line and the tmp content are updated.
** end is passed as the end parameter (size_t) for ft_strsub, since when two
** pointers are subtracted, both shall point to elements of the same array
** object, the result is the difference of the indices of the two array
** elements.
*/

static int		isline(char **tmp, char **line)
{
	size_t	end;
	char	*nl;

	if ((nl = ft_strchr(*tmp, '\n')))
	{
		end = (nl - *tmp);
		*line = ft_strsub(*tmp, 0, end);
		ft_strcpy(*tmp, (nl + 1));
		return (1);
	}
	return (0);
}

/*
** This function gets the next line in a given file descriptor.
** It updates the content pointed to by the line parameter if it finds a newline
** character in the buff's content and returns 1. Otherwise, it returns 0 when
** the end of file is reached. In case of error, the return value is -1.
** Parameter rval is the return value from a read call, thus the number of bytes
** read.
*/

int		get_next_line(const int fd, char **line)
{
	int				rval;
	char			buff[BUFF_SIZE + 1];
	static char		*tmp;

	if (!line || fd < 0 || BUFF_SIZE < 1)
		return (-1);
	if (tmp && isline(&tmp, line))
		return (1);
	while ((rval = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[rval] = '\0';
		if (!(tmp = strjoindel(tmp, buff)))
			return (-1);
		if (isline(&tmp, line))
			return (1);
	}
	if (rval == -1 || rval == 0)
		*line = NULL;
	if (tmp && *tmp)
	{
		*line = ft_strdup(tmp);
		ft_strdel(&tmp);
		return (1);
	}
	return (rval);
}
