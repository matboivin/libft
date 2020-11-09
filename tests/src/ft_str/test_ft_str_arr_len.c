/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_str_arr_len.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 00:12:49 by mboivin           #+#    #+#             */
/*   Updated: 2020/11/09 16:42:09 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft_test.h"

static void	compare_arr_lengths(char *s, char c, size_t expected)
{
	size_t	ft_ret;
	char	**test_arr;

	test_arr = ft_split(s, c);
	g_results->test_num++;
	PRINT_TEST_NUMBER(g_results->test_num);
	ft_ret = ft_str_arr_len(test_arr);
	printf("Expected result:\t%ld\n", expected);
	printf("ft_str_arr_len:\t\t%ld\n", ft_ret);
	ft_str_arr_del(test_arr);
	check_return(expected == ft_ret);
}

static void	compare_arr_lengths2(char *s, char c, size_t expected)
{
	size_t	ft_ret;
	char	**test_arr;

	test_arr = ft_split(s, c);
	test_arr[1] = ft_strreplace(test_arr[1], EMPTY_STR);
	test_arr[10] = ft_strreplace(test_arr[10], EMPTY_STR);
	g_results->test_num++;
	PRINT_TEST_NUMBER(g_results->test_num);
	ft_ret = ft_str_arr_len(test_arr);
	printf("Expected result:\t%ld\n", expected);
	printf("ft_str_arr_len:\t\t%ld\n", ft_ret);
	ft_str_arr_del(test_arr);
	check_return(expected == ft_ret);
}

void		test_ft_str_arr_len(void)
{
	g_results->test_num = 0;
	PRINT_TEST_NAME("FT_STR_ARR_LEN");
	compare_arr_lengths(TEST_STR_LOREM, ' ', 52);
	compare_arr_lengths2(TEST_STR_LOREM, ' ', 50);
	PRINT_SEP();
}
