/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 00:12:49 by mboivin           #+#    #+#             */
/*   Updated: 2020/11/05 18:44:50 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

t_result	*g_results;

int			main(void)
{
	int		ret_val;

	ret_val = 0;
	launch_tests();
	PRINT_TITLE("END OF TESTS");
	if (g_results->passed != g_results->total)
		ret_val = 1;
	free_result(g_results);
	return (ret_val);
}
