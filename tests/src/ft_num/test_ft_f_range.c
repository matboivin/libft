/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_f_range.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 13:51:41 by mboivin           #+#    #+#             */
/*   Updated: 2020/11/08 14:00:07 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include "libft_test.h"

static void	check_f_range(double x, double start, double end, bool expected)
{
	bool	ft_ret;

	g_results->test_num++;
	PRINT_TEST_NUMBER(g_results->test_num);
	printf("Input: %f <= %f <= %f\n\n", start, x, end);
	printf("Expected result:\t%d\n", expected);
	ft_ret = ft_f_range(x, start, end);
	printf("ft_f_range:\t\t%d\n", ft_ret);
	check_return(expected == ft_ret);
}

void		test_ft_f_range(void)
{
	g_results->test_num = 0;
	PRINT_TEST_NAME("FT_F_RANGE");
	check_f_range(0.0, -1.0, 1.5, true);
	check_f_range(42.7, 42.6, 42.8, true);
	check_f_range(42.6, 42.7, 42.8, false);
	PRINT_SEP();
}
