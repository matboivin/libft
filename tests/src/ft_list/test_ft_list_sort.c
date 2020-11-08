/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_list_sort.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 16:32:11 by mboivin           #+#    #+#             */
/*   Updated: 2020/11/08 13:50:11 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"
#include "libft_test.h"

static void	test_sort_00(void)
{
	char	*ref[3] = { "FOO", "FOO", "bar" };
	t_node	*test_lst;

	g_results->test_num++;
	PRINT_TEST_NUMBER(g_results->test_num);
	bzero(&test_lst, sizeof(test_lst));
	ft_list_append(&test_lst, ft_list_new(TEST_STR_UPPER_FOO));
	ft_list_append(&test_lst, ft_list_new(TEST_STR_LOWER_BAR));
	ft_list_append(&test_lst, ft_list_new(TEST_STR_UPPER_FOO));
	PRINT_TEST_LIST(test_lst);
	print_ref(ref, 3);
	printf("\nft_list_sort result:\n");
	ft_list_sort(&test_lst, data_cmp);
	ft_list_print(test_lst);
	check_return(ft_list_cmp(test_lst, ref) == 0);
	ft_list_del(&test_lst);
}

static void	test_sort_01(void)
{
	char	*ref[4] = { "FOO", "FOO", "FOO", "A     BCD EF" };
	t_node	*test_lst;

	g_results->test_num++;
	PRINT_TEST_NUMBER(g_results->test_num);
	bzero(&test_lst, sizeof(test_lst));
	ft_list_append(&test_lst, ft_list_new(TEST_STR_UPPER_AL));
	ft_list_append(&test_lst, ft_list_new(TEST_STR_UPPER_FOO));
	ft_list_append(&test_lst, ft_list_new(TEST_STR_UPPER_FOO));
	ft_list_append(&test_lst, ft_list_new(TEST_STR_UPPER_FOO));
	PRINT_TEST_LIST(test_lst);
	print_ref(ref, 4);
	printf("\nft_list_sort result:\n");
	ft_list_sort(&test_lst, data_cmp);
	ft_list_print(test_lst);
	check_return(ft_list_cmp(test_lst, ref) == 0);
	ft_list_del(&test_lst);
}

void		test_ft_list_sort(void)
{
	g_results->test_num = 0;
	PRINT_TEST_NAME("FT_LIST_SORT");
	test_sort_00();
	test_sort_01();
	PRINT_SEP();
}
