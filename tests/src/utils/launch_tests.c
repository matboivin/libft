/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 00:12:49 by mboivin           #+#    #+#             */
/*   Updated: 2020/11/05 18:53:07 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

static void	launch_conv_tests(void)
{
	PRINT_TITLE("CONVERSION");
	test_ft_atoi();
	test_ft_itoa();
	test_ft_utoa();
	test_ft_strtod();
	PRINT_TEST_RESULTS(g_results->passed, g_results->total);
}

static void	launch_list_tests(void)
{
	PRINT_TITLE("LIST");
	test_ft_list_size();
	test_ft_list_append();
	test_ft_list_prepend();
	test_ft_list_delif();
	test_ft_list_sort();
	PRINT_TEST_RESULTS(g_results->passed, g_results->total);
}

static void	launch_str_tests(void)
{
	PRINT_TITLE("STRING");
	test_ft_strlen();
	test_ft_strcmp();
	test_ft_strcpy();
	test_ft_strdup();
	PRINT_TEST_RESULTS(g_results->passed, g_results->total);
}

void		launch_tests(void)
{
	g_results = malloc_result();
	PRINT_TITLE("LIBFT TESTS");
	launch_conv_tests();
	launch_str_tests();
	launch_list_tests();
	PRINT_TEST_RESULTS(g_results->passed, g_results->total);
}
