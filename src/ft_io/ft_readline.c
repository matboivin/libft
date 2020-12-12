/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readline.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 15:33:20 by mboivin           #+#    #+#             */
/*   Updated: 2020/12/12 15:42:21 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_define.h"
#include "libft_io.h"
#include "libft_printf.h"
#include "libft_str.h"

/*
** This function reads a line from the terminal and return it, using prompt as
** a prompt.
** If prompt is NULL or the empty string, no prompt is issued.
** The line returned is allocated with malloc(3); the caller must free it when
** finished.
** The line returned has the final newline removed, so only the text of the
** line remains.
**
** returns: The text of the line read
**          NULL otherwise
*/

char		*ft_readline(const char *prompt)
{
	char	c;
	char	*line;

	line = NULL;
	if (prompt)
		ft_printf("%s", prompt);
	while ((c = ft_getchar()) != FT_EOF)
	{
		if (c == NEWLINE)
			break ;
		line = ft_char_to_str(line, c);
		if (!line)
			return (NULL);
	}
	return (line);
}
