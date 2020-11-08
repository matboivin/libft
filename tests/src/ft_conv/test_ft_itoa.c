/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_itoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 18:25:29 by mboivin           #+#    #+#             */
/*   Updated: 2020/11/08 13:41:16 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <string.h>
#include "libft_test.h"

static void	compare_itoa(int n, char *ref, int base)
{
	char	*result;

	g_results->test_num++;
	PRINT_TEST_NUMBER(g_results->test_num);
	printf("Expected result:\t\"%s\"\tin base %d\n", ref, base);
	result = ft_itoa(n, result, base);
	printf("ft_itoa result:\t\"%s\"\n", result);
	check_return(strcmp(result, ref) == 0);
	ft_strdel(&result);
}

void		test_ft_itoa(void)
{
	g_results->test_num = 0;
	PRINT_TEST_NAME("FT_ITOA");
	compare_itoa(0, "0", DEC_BASE);
	compare_itoa(INT_MAX, TEST_STR_INTMAX, DEC_BASE);
	compare_itoa(INT_MIN, TEST_STR_INTMIN, DEC_BASE);
	compare_itoa(42, "42", DEC_BASE);
	compare_itoa(42, "101010", BINARY_BASE);
	PRINT_SEP();
}
