/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_ctype_tests.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 00:12:49 by mboivin           #+#    #+#             */
/*   Updated: 2020/11/06 15:18:03 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	launch_ctype_tests(void)
{
	PRINT_TITLE("CTYPE");
	test_ft_charcount();
	test_ft_isalnum();
	test_ft_isalpha();
	test_ft_isdigit();
	PRINT_TEST_RESULTS(g_results->passed, g_results->total);
}
