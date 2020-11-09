/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 00:12:49 by mboivin           #+#    #+#             */
/*   Updated: 2020/11/09 20:17:32 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft_test.h"

static void	compare_lconcat(char *s, char *ref, size_t size, size_t expected)
{
	size_t	ft_ret;
	char	ft_dst[42] = "DST STRING-";

	g_results->test_num++;
	PRINT_TEST_NUMBER(g_results->test_num);
	printf("Input -> \"%s\" -> size: %ld\n\n", s, size);
	ft_ret = ft_strlcat(ft_dst, s, size);
	printf("Expected result:\t\"%s\" return: %ld\n", ref, expected);
	printf("ft_strlcat:\t\t\"%s\" return: %ld\n", ft_dst, ft_ret);
	check_return((strcmp(ref, ft_dst) == 0) && (expected == ft_ret));
}

void		test_ft_strlcat(void)
{
	g_results->test_num = 0;
	PRINT_TEST_NAME("FT_STRLCAT");
	compare_lconcat(TEST_STR_EMPTY, "DST STRING-", 11, 11);
	compare_lconcat(TEST_STR_HELLO, "DST STRING-Hello World!", 24, 23);
	compare_lconcat(TEST_STR_HELLO, "DST STRING-Hello World!", 43, 23);
	compare_lconcat(TEST_STR_HELLO, "DST STRING-Hell", 16, 15);
	PRINT_SEP();
}
