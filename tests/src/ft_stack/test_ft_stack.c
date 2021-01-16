/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 18:20:17 by mboivin           #+#    #+#             */
/*   Updated: 2021/01/16 19:25:07 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft_test.h"

static void	test_stack_00(void)
{
	char	*ref[4] = { TEST_NODE_1, TEST_NODE_2, TEST_NODE_3, TEST_NODE_4 };
	t_stack	*test_stack;

	g_results->test_num++;
	PRINT_TEST_NUMBER(g_results->test_num);
	test_stack = malloc_stack(4);
	ft_push_to_stack(test_stack, TEST_NODE_1);
	ft_push_to_stack(test_stack, TEST_NODE_2);
	ft_push_to_stack(test_stack, TEST_NODE_3);
	ft_push_to_stack(test_stack, TEST_NODE_4);
	ft_printf("stack <-> expected\n");
	check_return(ft_stack_cmp(test_stack, ref) == 0);
	free_stack(&test_stack);
}

static void	test_stack_01(void)
{
	char	*ref[4] = { "FOO", "BAR", "BAZ" };
	t_stack	*test_stack;

	g_results->test_num++;
	PRINT_TEST_NUMBER(g_results->test_num);
	test_stack = malloc_stack(4);
	ft_push_to_stack(test_stack, "FOO");
	ft_push_to_stack(test_stack, "BAR");
	ft_push_to_stack(test_stack, "BAZ");
	ft_printf("stack <-> expected\n");
	check_return(ft_stack_cmp(test_stack, ref) == 0);
	free_stack(&test_stack);
}

void		test_ft_stack(void)
{
	g_results->test_num = 0;
	PRINT_TEST_NAME("FT_STACK");
	test_stack_00();
	test_stack_01();
	PRINT_SEP();
}
