/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   select_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 15:15:06 by mboivin           #+#    #+#             */
/*   Updated: 2020/11/06 16:06:33 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

static t_launcher	g_launcher[] =
{
	{ "CONV", &launch_conv_tests },
	{ "CTYPE", &launch_ctype_tests },
	{ "LIST", &launch_list_tests },
	{ "STRING", &launch_str_tests }
};

static void	launch_selected_test(char *option)
{
	int		i;

	i = 0;
	while (i < MAX_OPTIONS)
	{
		if (!ft_strcmp(g_launcher[i].category, option))
		{
			(*g_launcher[i].func)();
			return ;
		}
		i++;
	}
}

void		select_test(char *option)
{
	g_results = malloc_result();
	PRINT_TITLE("LIBFT TESTS");
	launch_selected_test(option);
	PRINT_TEST_RESULTS(g_results->passed, g_results->total);
}
