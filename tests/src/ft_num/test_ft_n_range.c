/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_n_range.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 13:51:49 by mboivin           #+#    #+#             */
/*   Updated: 2020/11/08 15:07:46 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include "libft_test.h"

static void	check_n_range(int x, int start, int end, bool expected)
{
	bool	ft_ret;

	g_results->test_num++;
	PRINT_TEST_NUMBER(g_results->test_num);
	printf("Input -> %d <= %d <= %d\n\n", start, x, end);
	printf("Expected result:\t%d\n", expected);
	ft_ret = ft_n_range(x, start, end);
	printf("ft_n_range:\t\t%d\n", ft_ret);
	check_return(expected == ft_ret);
}

void		test_ft_n_range(void)
{
	g_results->test_num = 0;
	PRINT_TEST_NAME("FT_N_RANGE");
	check_n_range(0, -1, 1, true);
	check_n_range(42, 0, 100, true);
	check_n_range(100, 300, 700, false);
	PRINT_SEP();
}
