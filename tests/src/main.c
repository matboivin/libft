/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 00:12:49 by mboivin           #+#    #+#             */
/*   Updated: 2020/11/06 15:56:16 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

t_result	*g_results;

int			main(int argc, char **argv)
{
	int		ret_val;
	char	*option;

	ret_val = 0;
	option = check_params(argc, argv);
	if (!option)
		launch_tests();
	else
		select_test(option);
	PRINT_TITLE("END OF TESTS");
	if (g_results->passed != g_results->total)
		ret_val = 1;
	free_result(g_results);
	return (ret_val);
}
