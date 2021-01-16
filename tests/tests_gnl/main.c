/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 11:57:40 by mboivin           #+#    #+#             */
/*   Updated: 2021/01/02 22:40:00 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include "../get_next_line.h"

static void	print_line(int n, char **line, int ret_value)
{
	printf("Line: %d | %s | Return: %d\n", n, *line, ret_value);
}

static void	print_eofreached()
{
	printf("\n>> EOF reached\n\n");
}

static void	print_error()
{
	printf("\n/!\\ Error occurred\n\n");
}

static void	test_singlefd(int fd)
{
	char	*line;
	int		n;
	int		ret_value;

	line = NULL;
	n = 1;
	ret_value = 1;
	printf(">> Start test\n\n");
	while (ret_value > 0)
	{
		ret_value = get_next_line(fd, &line);
		print_line(n, &line, ret_value);
		n++;
		free(line);
	}
	if (ret_value == 0)
		print_eofreached();
	if (ret_value == -1)
		print_error();
	close(fd);
}

int			main(int argc, char **argv)
{
	int		fd;

	if (argc == 1)
		test_singlefd(STDIN_FILENO);
	else if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		test_singlefd(fd);
	}
	return (0);
}
