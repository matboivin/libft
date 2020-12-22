/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isnumeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 00:12:49 by mboivin           #+#    #+#             */
/*   Updated: 2020/12/22 19:26:52 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "libft_test.h"

static void	check_isnumeric(char *s, int expected)
{
	int		ft_ret;

	g_results->test_num++;
	PRINT_TEST_NUMBER(g_results->test_num);
	print_test_input(s, NULL);
	ft_ret = ft_isnumeric(s);
	printf("ft_isnumeric:\t\"%d\"\n", ft_ret);
	check_return(expected == ft_ret);
}

void		test_ft_isnumeric(void)
{
	g_results->test_num = 0;
	PRINT_TEST_NAME("FT_ISNUMERIC");
	check_isnumeric(TEST_STR_HELLO, 0);
	check_isnumeric(TEST_STR_LOWER_BAR, 0);
	check_isnumeric(TEST_STR_INTMAX, 1);
	check_isnumeric(TEST_STR_INTMIN, 1);
	check_isnumeric("42", 1);
	check_isnumeric("1337", 1);
	check_isnumeric("-1", 1);
	check_isnumeric("+3", 1);
	check_isnumeric("-", 0);
	check_isnumeric("+", 0);
	PRINT_SEP();
}
