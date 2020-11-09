/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strjoin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 17:40:55 by mboivin           #+#    #+#             */
/*   Updated: 2020/11/09 20:49:15 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft_test.h"

static void	compare_join(char *s1, char *s2, char *ref)
{
	char	*ft_ret;
	int		cmp_str;

	g_results->test_num++;
	PRINT_TEST_NUMBER(g_results->test_num);
	print_test_input(s1, s2);
	ft_ret = ft_strjoin(s1, s2);
	printf("Expected result:\t\"%s\"\n", ref);
	printf("ft_strjoin:\t\t\"%s\"\n", ft_ret);
	cmp_str = strcmp(ref, ft_ret);
	ft_strdel(&ft_ret);
	check_return(cmp_str == 0);
}

void		test_ft_strjoin(void)
{
	g_results->test_num = 0;
	PRINT_TEST_NAME("FT_STRJOIN");
	compare_join("Hello ", "World!", "Hello World!");
	compare_join("0", "123456789", "0123456789");
	PRINT_SEP();
}
