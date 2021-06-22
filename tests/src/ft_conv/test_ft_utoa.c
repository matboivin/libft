/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_utoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 18:25:32 by mboivin           #+#    #+#             */
/*   Updated: 2021/06/22 20:20:26 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <string.h>
#include "libft_test.h"

static void	compare_utoa(int n, char *ref, int base)
{
	char	*result = NULL;

	g_results->test_num++;
	PRINT_TEST_NUMBER(g_results->test_num);
	printf("Expected result:\t\"%s\"\tin base %d\n", ref, base);
	result = ft_utoa(n, result, base);
	printf("ft_utoa result:\t\"%s\"\n", result);
	check_return(strcmp(result, ref) == 0);
	ft_strdel(&result);
}

void		test_ft_utoa(void)
{
	g_results->test_num = 0;
	PRINT_TEST_NAME("FT_UTOA");
	compare_utoa(0, "0", DEC_BASE);
	compare_utoa(INT_MAX, TEST_STR_INTMAX, DEC_BASE);
	compare_utoa(INT_MIN, "2147483648", DEC_BASE);
	compare_utoa(42, "42", DEC_BASE);
	compare_utoa(42, "101010", BINARY_BASE);
	PRINT_SEP();
}
