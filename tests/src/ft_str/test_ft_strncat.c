/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 00:12:49 by mboivin           #+#    #+#             */
/*   Updated: 2021/06/22 20:27:34 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft_test.h"

static void	compare_nconcat(char *s, size_t n)
{
	char	*strncat_ret;
	char	*ft_ret;
	char	dst[42] = "DST STRING-";
	char	ft_dst[42] = "DST STRING-";

	g_results->test_num++;
	PRINT_TEST_NUMBER(g_results->test_num);
	printf("Input -> \"%s\"-> n: %ld\n\n", s, n);
	strncat_ret = strncat(dst, s, n);
	ft_ret = ft_strncat(ft_dst, s, n);
	printf("strncat:\t\"%s\"\n", strncat_ret);
	printf("ft_strncat:\t\"%s\"\n", ft_ret);
	check_return(strcmp(strncat_ret, ft_ret) == 0);
}

void		test_ft_strncat(void)
{
	g_results->test_num = 0;
	PRINT_TEST_NAME("FT_STRNCAT");
	compare_nconcat(TEST_STR_EMPTY, 5);
	compare_nconcat(TEST_STR_HELLO, ft_strlen(TEST_STR_HELLO));
	compare_nconcat(TEST_STR_HELLO, 4);
	compare_nconcat(TEST_STR_LOWER_AL, 7);
	compare_nconcat(TEST_STR_UPPER_AL, 2);
	compare_nconcat(TEST_STR_LOREM, 33);
	PRINT_SEP();
}
