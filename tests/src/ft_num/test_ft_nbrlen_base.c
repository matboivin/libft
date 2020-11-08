/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_nbrlen_base.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 13:13:23 by mboivin           #+#    #+#             */
/*   Updated: 2020/11/08 13:44:58 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

static void	check_nbrlen_base(int n, int expected, int base)
{
	int		ft_ret;

	g_results->test_num++;
	PRINT_TEST_NUMBER(g_results->test_num);
	ft_ret = ft_nbrlen_base(n, base);
	printf("Input number: %d\tin base: %d\n\n", n, base);
	printf("Expected result:\t%d\n", expected);
	printf("ft_nbrlen_base:\t\t%d\n", ft_ret);
	check_return(expected == ft_ret);
}

void		test_ft_nbrlen_base(void)
{
	g_results->test_num = 0;
	PRINT_TEST_NAME("FT_NBRLEN_BASE");
	check_nbrlen_base(0, 1, DEC_BASE);
	check_nbrlen_base(42, 6, BINARY_BASE);
	check_nbrlen_base(42, 2, HEX_BASE);
	check_nbrlen_base(42, 2, OCT_BASE);
	PRINT_SEP();
}
