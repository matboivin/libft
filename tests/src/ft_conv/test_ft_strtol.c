/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strtol.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 18:25:29 by mboivin           #+#    #+#             */
/*   Updated: 2021/05/04 22:53:18 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <string.h>
#include "libft_test.h"

static void	compare_strtol(char *s)
{
	long	strtol_ret = 0;
	long	ft_ret = 0;
	char	*endptr = NULL;
	char	*ft_endptr = NULL;

	g_results->test_num++;
	PRINT_TEST_NUMBER(g_results->test_num);
	print_test_input(s, NULL);
	strtol_ret = strtol(s, &endptr, 10);
	ft_ret = ft_strtol(s, &ft_endptr);
	printf("strtol:\t\t\"%ld\" | endptr: %s\n", strtol_ret, endptr);
	printf("ft_strtol:\t\"%ld\" | endptr: %s\n", ft_ret, ft_endptr);
	check_return(strtol_ret == ft_ret);
}

void		test_ft_strtol(void)
{
	g_results->test_num = 0;
	PRINT_TEST_NAME("FT_STRTOL");
	compare_strtol("0");
	compare_strtol("2030300 TEST");
	compare_strtol("500|     FOO|");
	compare_strtol("-2|     FOO|");
	PRINT_SEP();
}
