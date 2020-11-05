/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_list_append.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 19:15:50 by mboivin           #+#    #+#             */
/*   Updated: 2020/10/25 20:21:19 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft_test.h"

static void	test_append_00(void)
{
	char	*ref[4] = { TEST_NODE_1, TEST_NODE_2, TEST_NODE_3, TEST_NODE_4 };
	t_node	*test_lst;

	g_results->test_num++;
	PRINT_TEST_NUMBER(g_results->test_num);
	print_ref(ref, 4);
	printf("\nft_list_append result:\n");
	bzero(&test_lst, sizeof(test_lst));
	ft_list_append(&test_lst, ft_list_new(TEST_NODE_1));
	ft_list_append(&test_lst, ft_list_new(TEST_NODE_2));
	ft_list_append(&test_lst, ft_list_new(TEST_NODE_3));
	ft_list_append(&test_lst, ft_list_new(TEST_NODE_4));
	ft_list_print(test_lst);
	check_return(ft_list_cmp(test_lst, ref) == 0);
	ft_list_del(&test_lst);
}

static void	test_append_01(void)
{
	char	*ref[5] = { "A", "B", "C", "D", "E" };
	t_node	*test_lst;

	g_results->test_num++;
	PRINT_TEST_NUMBER(g_results->test_num);
	print_ref(ref, 5);
	printf("\nft_list_append result:\n");
	bzero(&test_lst, sizeof(test_lst));
	ft_list_append(&test_lst, ft_list_new("A"));
	ft_list_append(&test_lst, ft_list_new("B"));
	ft_list_append(&test_lst, ft_list_new("C"));
	ft_list_append(&test_lst, ft_list_new("D"));
	ft_list_append(&test_lst, ft_list_new("E"));
	ft_list_print(test_lst);
	check_return(ft_list_cmp(test_lst, ref) == 0);
	ft_list_del(&test_lst);
}

void		test_ft_list_append(void)
{
	g_results->test_num = 0;
	PRINT_TEST_NAME("FT_LIST_APPEND");
	test_append_00();
	test_append_01();
	PRINT_SEP();
}
