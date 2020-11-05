/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strtod.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 18:25:29 by mboivin           #+#    #+#             */
/*   Updated: 2020/11/05 18:56:15 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <string.h>
#include "libft_test.h"

static void	compare_strtod(char	*s, double ref)
{
	double	result;
	char	*endptr;

	endptr = NULL;
	g_results->test_num++;
	PRINT_TEST_INPUT(g_results->test_num, NULL, NULL);
	printf("Expected result:\t\"%f\"\n", ref);
	result = ft_strtod(s, &endptr);
	printf("ft_strtod result:\t\"%f\"\n", result);
	check_return(result == ref);
	ft_strdel(&endptr);
}

void		test_ft_strtod(void)
{
	g_results->test_num = 0;
	PRINT_TEST_NAME("FT_STRTOD");
	compare_strtod("0.0", 0.0);
	compare_strtod("-10.0", -10.0);
	compare_strtod("42.0", 42.0);
	compare_strtod("2147483647", 2147483647.0);
	PRINT_SEP();
}
