/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_ctype_tests.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 00:12:49 by mboivin           #+#    #+#             */
/*   Updated: 2020/11/06 16:32:25 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	launch_ctype_tests(void)
{
	PRINT_TITLE("CTYPE");
	test_ft_charcount();
	test_ft_isalnum();
	test_ft_isalpha();
	test_ft_isascii();
	test_ft_isblank();
	test_ft_ischarset();
	test_ft_iscntrl();
	test_ft_isdigit();
	test_ft_islower();
	test_ft_isnumeric();
	test_ft_isprint();
	test_ft_isspace();
	test_ft_isupper();
	test_ft_tolower();
	test_ft_toupper();
	PRINT_TEST_RESULTS(g_results->passed, g_results->total);
}
