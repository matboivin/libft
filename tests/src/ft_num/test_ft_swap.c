/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 13:13:26 by mboivin           #+#    #+#             */
/*   Updated: 2020/11/08 14:01:22 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

static void	check_swap(int a, int b)
{
	int		former_a;
	int		former_b;

	former_a = a;
	former_b = b;
	g_results->test_num++;
	PRINT_TEST_NUMBER(g_results->test_num);
	printf("Expected result:\ta = %d, b = %d\n", b, a);
	ft_swap(&a, &b);
	printf("ft_swap:\t\ta = %d, b = %d\n", a, b);
	check_return((former_a == b) && (former_b == a));
}

void		test_ft_swap(void)
{
	g_results->test_num = 0;
	PRINT_TEST_NAME("FT_SWAP");
	check_swap(0, 9);
	check_swap(42, 1337);
	PRINT_SEP();
}
