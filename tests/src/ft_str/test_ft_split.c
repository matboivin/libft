/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 17:40:55 by mboivin           #+#    #+#             */
/*   Updated: 2020/11/18 19:39:03 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft_test.h"

static void	compare_split(char *s, char delim, char **ref)
{
	char	**result;
	int		cmp_str = 0;
	int		i = 0;

	g_results->test_num++;
	PRINT_TEST_NUMBER(g_results->test_num);
	printf("Input -> \"%s\" delimited by: \"%c\"\n\n", s, delim);
	result = ft_split(s, delim);
	if (!result)
		return ;
	while (ref[i] && result[i])
	{
		printf(
			"Expected result:\t\"%s\"\nft_split:\t\t\"%s\"\n",
			ref[i], result[i]);
		cmp_str += strcmp(ref[i], result[i]);
		i++;
	}
	ft_str_arr_del(result);
	check_return(cmp_str == 0);
}

void		test_ft_split(void)
{
	char	*s = "     AAAA   - BBB -- C -! DD !!   ";
	char	delim1 = ' ';
	char	delim2 = '-';
	char	delim3 = 'C';
	char	*ref1[8] = { "AAAA", "-", "BBB", "--", "C", "-!", "DD", "!!" };
	char	*ref2[4] = { "     AAAA   ", " BBB ", " C ", "! DD !!   " };
	char	*ref3[2] = { "     AAAA   - BBB -- ", " -! DD !!   " };

	g_results->test_num = 0;
	PRINT_TEST_NAME("FT_SPLIT");
	compare_split(s, delim1, ref1);
	compare_split(s, delim2, ref2);
	compare_split(s, delim3, ref3);
	PRINT_SEP();
}
