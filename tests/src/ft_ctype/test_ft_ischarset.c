/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_ischarset.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 00:12:49 by mboivin           #+#    #+#             */
/*   Updated: 2020/11/08 13:39:53 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "libft_test.h"

static void	check_ischarset(char c, const char *set, int expected)
{
	int		ft_ret;

	g_results->test_num++;
	PRINT_TEST_NUMBER(g_results->test_num);
	ft_ret = ft_ischarset(c, set);
	printf("Expected result:\t\"%d\"\n", expected);
	printf("ft_ischarset:\t\"%d\"\n", ft_ret);
	check_return(expected == ft_ret);
}

void		test_ft_ischarset(void)
{
	g_results->test_num = 0;
	PRINT_TEST_NAME("FT_ISCHARSET");
	check_ischarset('a', TEST_STR_EMPTY, 0);
	check_ischarset('a', TEST_STR_LOWER_AL, 1);
	check_ischarset('A', TEST_STR_LOWER_AL, 0);
	check_ischarset('o', TEST_STR_HELLO, 1);
	check_ischarset('h', TEST_STR_HELLO, 0);
	PRINT_SEP();
}
