/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_file.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 11:21:30 by mboivin           #+#    #+#             */
/*   Updated: 2020/10/24 00:42:27 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_FILE_H
# define LIBFT_FILE_H
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

# define NEWLINE '\n'

/*
** With the GNU C Library, EOF is -1
** In other libraries, its value may be some other negative number
*/

# define FT_EOF -1

/*
** IO file
**
** head: Current read pointer
** count: The number of chars in the buffer
** buffer: The data storage area
** fd: File descriptor
*/

typedef struct	s_file
{
	char		*head;
	int			fd;
	size_t		count;
	char		buffer[BUFFER_SIZE + 1];
}				t_file;

int				ft_fileno(t_file *stream);
int				ft_fgetc(t_file *stream);
int				get_next_line(int fd, char **line);

#endif
