/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strtrim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 00:12:49 by mboivin           #+#    #+#             */
/*   Updated: 2020/12/09 18:00:53 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft_test.h"

static void	compare_trimming(char *s, const char *set, char *ref)
{
	char	*ft_ret;
	int		cmp_str;

	g_results->test_num++;
	PRINT_TEST_NUMBER(g_results->test_num);
	print_test_input(s, ref);
	ft_ret = ft_strtrim(s, set);
	printf("Expected result:\t\"%s\"\n", ref);
	printf("ft_strtrim:\t\t\"%s\"\n", ft_ret);
	cmp_str = strcmp(ref, ft_ret);
	ft_strdel(&ft_ret);
	check_return(cmp_str == 0);
}

void		test_ft_strtrim(void)
{
	g_results->test_num = 0;
	PRINT_TEST_NAME("FT_STRTRIM");
	compare_trimming("\"HELLO\"", "\"", "HELLO");
	compare_trimming("\"\"", "\"", "");
	compare_trimming("\"HELLO\"", "\'", "\"HELLO\"");
	compare_trimming("\'\'H\'ELLO\'\'\'", "\'", "H\'ELLO");
	PRINT_SEP();
}
