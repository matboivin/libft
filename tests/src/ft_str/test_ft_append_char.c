/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_append_char.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 00:12:49 by mboivin           #+#    #+#             */
/*   Updated: 2021/01/01 21:38:47 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft_test.h"

static void	compare_append(char *s, char *c, char *ref)
{
	char	*ft_ret;
	int		cmp_str;

	g_results->test_num++;
	PRINT_TEST_NUMBER(g_results->test_num);
	printf("Input -> \"%s\" + \"%s\"\n\n", s, c);
	ft_ret = ft_append_char(s, c);
	printf("Expected result:\t\"%s\"\n", ref);
	printf("ft_append_char:\t\t\"%s\"\n", ft_ret);
	cmp_str = strcmp(ref, ft_ret);
	ft_strdel(&ft_ret);
	check_return(cmp_str == 0);
}

void		test_ft_append_char(void)
{
	g_results->test_num = 0;
	PRINT_TEST_NAME("FT_APPEND_CHAR");
	compare_append("", "A", "A");
	compare_append("Hello World", "!", "Hello World!");
	PRINT_SEP();
}
