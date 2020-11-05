/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_list_size.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 19:15:50 by mboivin           #+#    #+#             */
/*   Updated: 2020/11/05 17:48:01 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

static void	compare_list_sizes(t_node *test_lst, int expected)
{
	int		size;

	g_results->test_num++;
	PRINT_TEST_INPUT(g_results->test_num, NULL, NULL);
	PRINT_TEST_LIST(test_lst);
	size = ft_list_size(test_lst);
	printf("Expected size:\t%d\n", expected);
	printf("ft_list_size:\t%d\n", size);
	check_return(size == expected);
}

void		test_ft_list_size(void)
{
	t_node	*test_lst;

	test_lst = NULL;
	g_results->test_num = 0;
	PRINT_TEST_NAME("FT_LIST_SIZE");
	compare_list_sizes(test_lst, 0);
	ft_list_append(&test_lst, ft_list_new(TEST_STR_00));
	compare_list_sizes(test_lst, 1);
	ft_list_append(&test_lst, ft_list_new(TEST_STR_04));
	compare_list_sizes(test_lst, 2);
	ft_list_append(&test_lst, ft_list_new(TEST_STR_05));
	compare_list_sizes(test_lst, 3);
	ft_list_del(&test_lst);
	PRINT_SEP();
}
