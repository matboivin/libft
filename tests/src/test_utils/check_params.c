/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_params.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 15:04:14 by mboivin           #+#    #+#             */
/*   Updated: 2020/11/06 16:09:52 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <string.h>
#include "libft_test.h"

static void	print_usage(void)
{
	printf(
		"Usage: ./libft_test [-h | FUNCTIONS TO TEST]\n\n\
		\r  -h       print this usage message\n\n\
		\rFUNCTIONS TO TEST:\n\
		\r  CONV | CTYPE | LIST | STRING\n");
	exit(EXIT_SUCCESS);
}

static bool	check_option(char *tofind)
{
	bool	retvalue;
	int		i;
	char	options[MAX_OPTIONS][MAX_STR_SIZE] =
	{
		"CONV",
		"CTYPE",
		"LIST",
		"NUM",
		"STRING"
	};

	retvalue = false;
	i = 0;
	while (i <= MAX_OPTIONS)
	{
		if (!strcmp(options[i], tofind))
		{
			retvalue = true;
			break ;
		}
		i++;
	}
	return (retvalue);
}

char		*check_params(int argc, char **argv)
{
	if ((MIN_ARGC > argc) || (argc > MAX_ARGC))
		print_usage();
	if (argc == MAX_ARGC)
	{
		if (!strcmp(argv[1], HELP_OPT))
			print_usage();
		if (check_option(argv[1]))
			return (argv[1]);
		print_usage();
	}
	return (NULL);
}
