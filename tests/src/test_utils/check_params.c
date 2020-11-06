/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_params.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 15:04:14 by mboivin           #+#    #+#             */
/*   Updated: 2020/11/06 15:20:32 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

static void	print_usage(void)
{
	printf(
		"Usage: ./libft_test [FUNCTIONS CATEGORY]\n\n\
		\rFUNCTIONS CATEGORY:\n\
		\rCONV | CTYPE | LIST | STRING\n");
	exit(EXIT_FAILURE);
}

char	*check_params(int argc, char **argv)
{
	if ((MIN_ARGC > argc) || (argc > MAX_ARGC))
		print_usage();
	if (argc == MAX_ARGC)
		return (argv[1]);
	return (NULL);
}
