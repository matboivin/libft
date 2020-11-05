/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_itoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 18:25:29 by mboivin           #+#    #+#             */
/*   Updated: 2020/11/05 18:56:31 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <string.h>
#include "libft_test.h"

static void	compare_itoa(int n, char *ref, int base)
{
	char	*result;

	g_results->test_num++;
	PRINT_TEST_INPUT(g_results->test_num, NULL, NULL);
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
	compare_itoa(DEFAULT_VALUE, "0", DEC_BASE);
	compare_itoa(INT_MAX, "2147483647", DEC_BASE);
	compare_itoa(INT_MIN, "-2147483648", DEC_BASE);
	compare_itoa(TEST_SIZE, "42", DEC_BASE);
	compare_itoa(TEST_SIZE, "101010", BINARY_BASE);
	PRINT_SEP();
}
