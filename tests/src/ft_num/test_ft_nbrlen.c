/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_nbrlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 13:13:23 by mboivin           #+#    #+#             */
/*   Updated: 2020/11/08 15:08:02 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

static void	check_nbrlen(int n, int expected)
{
	int		ft_ret;

	g_results->test_num++;
	PRINT_TEST_NUMBER(g_results->test_num);
	ft_ret = ft_nbrlen(n);
	printf("Input number -> %d\n\n", n);
	printf("Expected result:\t%d\n", expected);
	printf("ft_nbrlen:\t\t%d\n", ft_ret);
	check_return(expected == ft_ret);
}

void		test_ft_nbrlen(void)
{
	g_results->test_num = 0;
	PRINT_TEST_NAME("FT_NBRLEN");
	check_nbrlen(0, 1);
	check_nbrlen(42, 2);
	check_nbrlen(1337, 4);
	check_nbrlen(-1, 2);
	PRINT_SEP();
}
