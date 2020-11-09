/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strcat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 00:12:49 by mboivin           #+#    #+#             */
/*   Updated: 2020/11/09 18:57:08 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft_test.h"

static void	compare_concat(char *s)
{
	char	*strcat_ret;
	char	*ft_ret;
	char	dst[42] = "DST STRING-";
	char	ft_dst[42] = "DST STRING-";

	g_results->test_num++;
	PRINT_TEST_NUMBER(g_results->test_num);
	print_test_input(s, NULL);
	strcat_ret = strcat(dst, s);
	ft_ret = ft_strcat(ft_dst, s);
	printf("strcat:\t\t\"%s\"\n", strcat_ret);
	printf("ft_strcat:\t\"%s\"\n", ft_ret);
	check_return(strcmp(strcat_ret, ft_ret) == 0);
}

void		test_ft_strcat(void)
{
	g_results->test_num = 0;
	PRINT_TEST_NAME("FT_STRCAT");
	compare_concat(TEST_STR_EMPTY);
	compare_concat(TEST_STR_HELLO);
	compare_concat(TEST_STR_HELL);
	compare_concat(TEST_STR_LOWER_AL);
	compare_concat(TEST_STR_UPPER_AL);
	compare_concat(TEST_STR_UPPER_FOO);
	compare_concat(TEST_STR_LOWER_BAR);
	PRINT_SEP();
}
