/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strjoindel.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 17:40:55 by mboivin           #+#    #+#             */
/*   Updated: 2020/11/09 21:52:04 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft_test.h"

static void	compare_joindel(char *s1, char *s2, char *ref)
{
	char	*ft_ret;
	char	*to_del1 = ft_strdup(s1);
	char	*to_del2 = ft_strdup(s2);

	g_results->test_num++;
	PRINT_TEST_NUMBER(g_results->test_num);
	print_test_input(s1, s2);
	ft_ret = ft_strjoindel(to_del1, to_del2);
	printf("Expected result:\t\"%s\"\n", ref);
	printf("ft_strjoindel:\t\t\"%s\"\n", ft_ret);
	check_return(strcmp(ref, ft_ret) == 0);
	ft_strdel(&ft_ret);
}

void		test_ft_strjoindel(void)
{
	g_results->test_num = 0;
	PRINT_TEST_NAME("FT_STRJOINDEL");
	compare_joindel("Hello ", "World!", "Hello World!");
	compare_joindel("0", "123456789", "0123456789");
	PRINT_SEP();
}
