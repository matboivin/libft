/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_conv_tests.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 00:12:49 by mboivin           #+#    #+#             */
/*   Updated: 2021/05/04 22:23:53 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	launch_conv_tests(void)
{
	PRINT_TITLE("CONVERSION");
	test_ft_atoi();
	test_ft_itoa();
	test_ft_utoa();
	test_ft_strtod();
	test_ft_strtol();
	PRINT_TEST_RESULTS(g_results->passed, g_results->total);
}
