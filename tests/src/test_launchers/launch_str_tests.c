/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_str_tests.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 00:12:49 by mboivin           #+#    #+#             */
/*   Updated: 2020/11/18 20:22:32 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	launch_str_tests(void)
{
	PRINT_TITLE("STRING");
	test_ft_strlen();
	test_ft_strcmp();
	test_ft_strcpy();
	test_ft_strncpy();
	test_ft_strlcpy();
	test_ft_strcat();
	test_ft_strncat();
	test_ft_strlcat();
	test_ft_strdup();
	test_ft_strjoin();
	test_ft_strjoindel();
	test_ft_strjoindelone();
	test_ft_join_n_str();
	test_ft_str_arr_len();
	test_ft_split();
	test_ft_strtok();
	PRINT_TEST_RESULTS(g_results->passed, g_results->total);
}
