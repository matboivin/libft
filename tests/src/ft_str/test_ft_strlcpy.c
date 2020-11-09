/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 17:40:55 by mboivin           #+#    #+#             */
/*   Updated: 2020/11/09 21:50:36 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft_test.h"

static void	compare_lcopies(char *s, char *ref, size_t size, size_t expected)
{
	size_t	ft_ret;
	char	*ft_dst;

	g_results->test_num++;
	PRINT_TEST_NUMBER(g_results->test_num);
	printf("Input -> \"%s\" -> size: %ld\n\n", s, size);
	ft_dst = ft_strnew(ft_strlen(s));
	if (!ft_dst)
		exit(EXIT_FAILURE);
	ft_ret = ft_strlcpy(ft_dst, s, size);
	printf("Expected result:\t\"%s\" return: %ld\n", ref, expected);
	printf("ft_strlcpy:\t\t\"%s\" return: %ld\n", ft_dst, ft_ret);
	check_return((strcmp(ref, ft_dst) == 0) && (expected == ft_ret));
	ft_strdel(&ft_dst);
}

void		test_ft_strlcpy(void)
{
	g_results->test_num = 0;
	PRINT_TEST_NAME("FT_STRLCPY");
	//compare_lcopies(TEST_STR_EMPTY, "", 1, 0);
	compare_lcopies(TEST_STR_HELLO, TEST_STR_HELLO, 13, 12);
	compare_lcopies(TEST_STR_HELLO, "Hello", 6, 12);
	compare_lcopies(TEST_STR_HELL, "Hell", 5, 4);
	PRINT_SEP();
}
