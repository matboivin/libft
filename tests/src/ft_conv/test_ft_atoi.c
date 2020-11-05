/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 18:25:24 by mboivin           #+#    #+#             */
/*   Updated: 2020/11/05 19:21:08 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

static void	compare_atoi(char *s)
{
	int		atoi_ret;
	int		ft_ret;

	g_results->test_num++;
	PRINT_TEST_NUMBER(g_results->test_num);
	print_test_input(s, NULL);
	atoi_ret = atoi(s);
	ft_ret = ft_atoi(s);
	printf("atoi:\t\t\"%d\"\n", atoi_ret);
	printf("ft_atoi:\t\"%d\"\n", ft_ret);
	check_return(atoi_ret == ft_ret);
}

void		test_ft_atoi(void)
{
	g_results->test_num = 0;
	PRINT_TEST_NAME("FT_ATOI");
	compare_atoi("0");
	compare_atoi("2147483647");
	compare_atoi("-2147483648");
	PRINT_SEP();
}
