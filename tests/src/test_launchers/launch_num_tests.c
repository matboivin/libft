/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_num_tests.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 00:12:49 by mboivin           #+#    #+#             */
/*   Updated: 2020/11/08 13:57:16 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	launch_num_tests(void)
{
	PRINT_TITLE("NUM");
	test_ft_swap();
	test_ft_nbrlen();
	test_ft_nbrlen_base();
	test_ft_unbrlen_base();
	test_ft_n_range();
	test_ft_f_range();
	PRINT_TEST_RESULTS(g_results->passed, g_results->total);
}
