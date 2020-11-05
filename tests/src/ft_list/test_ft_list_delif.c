/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_list_delif.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 16:32:14 by mboivin           #+#    #+#             */
/*   Updated: 2020/10/25 23:31:26 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft_test.h"

static void	test_delif_00(void)
{
	char	*ref[2] = { "FOO", "FOO" };
	t_node	*test_lst;

	g_results->test_num++;
	PRINT_TEST_INPUT(g_results->test_num, NULL, NULL);
	bzero(&test_lst, sizeof(test_lst));
	ft_list_append(&test_lst, ft_list_new(TEST_STR_04));
	ft_list_append(&test_lst, ft_list_new(TEST_STR_04));
	ft_list_append(&test_lst, ft_list_new(TEST_STR_05));
	PRINT_TEST_LIST(test_lst);
	printf("Remove if data == \"%s\"\n\n", TEST_STR_05);
	print_ref(ref, 2);
	printf("\nft_list_delif result:\n");
	ft_list_delif(&test_lst, TEST_STR_05);
	ft_list_print(test_lst);
	check_return(ft_list_cmp(test_lst, ref) == 0);
	ft_list_del(&test_lst);
}

static void	test_delif_01(void)
{
	char	*ref[3] = { TEST_NODE_1, TEST_NODE_2, TEST_NODE_4 };
	t_node	*test_lst;

	g_results->test_num++;
	PRINT_TEST_INPUT(g_results->test_num, NULL, NULL);
	bzero(&test_lst, sizeof(test_lst));
	ft_list_append(&test_lst, ft_list_new(TEST_NODE_1));
	ft_list_append(&test_lst, ft_list_new(TEST_NODE_2));
	ft_list_append(&test_lst, ft_list_new(TEST_NODE_3));
	ft_list_append(&test_lst, ft_list_new(TEST_NODE_4));
	PRINT_TEST_LIST(test_lst);
	printf("Remove if data == \"%s\"\n\n", TEST_NODE_3);
	print_ref(ref, 3);
	printf("\nft_list_delif result:\n");
	ft_list_delif(&test_lst, TEST_NODE_3);
	ft_list_print(test_lst);
	check_return(ft_list_cmp(test_lst, ref) == 0);
	ft_list_del(&test_lst);
}

void		test_ft_list_delif(void)
{
	g_results->test_num = 0;
	PRINT_TEST_NAME("FT_LIST_DELIF");
	test_delif_00();
	test_delif_01();
	PRINT_SEP();
}
