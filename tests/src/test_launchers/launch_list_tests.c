/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_list_tests.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 00:12:49 by mboivin           #+#    #+#             */
/*   Updated: 2020/11/06 15:21:25 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	launch_list_tests(void)
{
	PRINT_TITLE("LIST");
	test_ft_list_size();
	test_ft_list_append();
	test_ft_list_prepend();
	test_ft_list_delif();
	test_ft_list_sort();
	PRINT_TEST_RESULTS(g_results->passed, g_results->total);
}
