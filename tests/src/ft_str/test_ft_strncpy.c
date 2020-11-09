/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 17:40:55 by mboivin           #+#    #+#             */
/*   Updated: 2020/11/09 21:43:23 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft_test.h"

static void	compare_ncopies(char *s, size_t n)
{
	char	*strncpy_ret;
	char	*ft_ret;
	char	*dst;
	char	*ft_dst;
	char	*src;

	g_results->test_num++;
	PRINT_TEST_NUMBER(g_results->test_num);
	printf("Input -> \"%s\"-> n: %ld\n\n", s, n);
	dst = ft_strnew(ft_strlen(s));
	ft_dst = ft_strnew(ft_strlen(s));
	src = strdup(s);
	if (!dst || !src)
		exit(EXIT_FAILURE);
	strncpy_ret = strncpy(dst, src, n);
	ft_ret = ft_strncpy(ft_dst, src, n);
	printf("strncpy:\t\"%s\"\n", strncpy_ret);
	printf("ft_strncpy:\t\"%s\"\n", ft_ret);
	check_return(strcmp(strncpy_ret, ft_ret) == 0);
	ft_strdel(&dst);
	ft_strdel(&ft_dst);
	ft_strdel(&src);
}

void		test_ft_strncpy(void)
{
	g_results->test_num = 0;
	PRINT_TEST_NAME("FT_STRNCPY");
	compare_ncopies(TEST_STR_EMPTY, 0);
	compare_ncopies(TEST_STR_HELLO, ft_strlen(TEST_STR_HELLO));
	compare_ncopies(TEST_STR_HELLO, 4);
	compare_ncopies(TEST_STR_LOWER_AL, 7);
	compare_ncopies(TEST_STR_UPPER_AL, 2);
	compare_ncopies(TEST_STR_LOREM, 42);
	PRINT_SEP();
}
