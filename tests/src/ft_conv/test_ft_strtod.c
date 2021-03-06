/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strtod.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 18:25:29 by mboivin           #+#    #+#             */
/*   Updated: 2021/05/04 22:51:11 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <string.h>
#include "libft_test.h"

static void	compare_strtod(char *s, double ref, char *ref_ptr)
{
	double	result = 0.0;
	char	*endptr = NULL;

	g_results->test_num++;
	PRINT_TEST_NUMBER(g_results->test_num);
	print_test_input(NULL, NULL);
	printf("Expected result:\t\"%f\" | endptr: %s\n", ref, ref_ptr);
	result = ft_strtod(s, &endptr);
	printf("ft_strtod result:\t\"%f\" | endptr: %s\n", result, endptr);
	check_return(ref == result);
}

void		test_ft_strtod(void)
{
	g_results->test_num = 0;
	PRINT_TEST_NAME("FT_STRTOD");
	compare_strtod("0.0 TEST", 0.0, " TEST");
	compare_strtod("-10.0", -10.0, "");
	compare_strtod("42.0|   FOO |", 42.0, "|   FOO |");
	compare_strtod(TEST_STR_INTMAX, 2147483647.0, "");
	PRINT_SEP();
}
