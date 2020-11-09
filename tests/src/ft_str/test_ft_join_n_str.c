/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_join_n_str.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 17:40:55 by mboivin           #+#    #+#             */
/*   Updated: 2020/11/09 21:56:56 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft_test.h"

static void	compare_n_join(int count, char *s1, char *s2, char *s3, char *ref)
{
	char	*ft_ret;
	int		cmp_str;

	g_results->test_num++;
	PRINT_TEST_NUMBER(g_results->test_num);
	printf("Input -> \"%s\" + \"%s\" + \"%s\"\n\n", s1, s2, s3);
	ft_ret = ft_join_n_str(count, s1, s2, s3);
	printf("Expected result:\t\"%s\"\n", ref);
	printf("ft_join_n_str:\t\t\"%s\"\n", ft_ret);
	cmp_str = strcmp(ref, ft_ret);
	ft_strdel(&ft_ret);
	check_return(cmp_str == 0);
}

void		test_ft_join_n_str(void)
{
	g_results->test_num = 0;
	PRINT_TEST_NAME("ft_join_n_str");
	compare_n_join(3, "Hello", " ", "World!","Hello World!");
	compare_n_join(3, "key", "=", "value", "key=value");
	PRINT_SEP();
}
