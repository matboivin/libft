/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_charcount.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 00:12:49 by mboivin           #+#    #+#             */
/*   Updated: 2020/11/06 14:48:28 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "libft_test.h"

static void	check_charcount(int c, char *s, int expected)
{
	int		ft_ret;

	g_results->test_num++;
	PRINT_TEST_NUMBER(g_results->test_num);
	ft_ret = ft_charcount(c, s);
	printf("Expected count:\t\"%d\"\n", expected);
	printf("ft_charcount:\t\"%d\"\n", ft_ret);
	check_return(expected == ft_ret);
}

void		test_ft_charcount(void)
{
	g_results->test_num = 0;
	PRINT_TEST_NAME("FT_CHARCOUNT");
	check_charcount('a', TEST_STR_EMPTY, 0);
	check_charcount('a', TEST_STR_02, 1);
	check_charcount('o', TEST_STR_00, 2);
	check_charcount('l', TEST_STR_00, 3);
	check_charcount('z', "zzzzzzzzzz", 10);
	PRINT_SEP();
}
