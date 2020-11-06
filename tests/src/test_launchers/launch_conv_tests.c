/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_conv_tests.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 00:12:49 by mboivin           #+#    #+#             */
/*   Updated: 2020/11/06 15:17:07 by mboivin          ###   ########.fr       */
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
	PRINT_TEST_RESULTS(g_results->passed, g_results->total);
}
