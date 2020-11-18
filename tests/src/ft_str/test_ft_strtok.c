/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strtok.c                                    :+:      :+:    :+:   */
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

static void	compare_tokens(
	char *s, const char *delim1, const char *delim2, char **ref)
{
	char	*token;
	int		cmp_str = 0;
	int		i = 0;

	g_results->test_num++;
	PRINT_TEST_NUMBER(g_results->test_num);
	printf(
		"Input -> \"%s\" delimited by: \"%s\" + \"%s\"\n\n",
		s, delim1, delim2);
	token = ft_strtok(s, delim1);
	if (!token)
		return ;
	while (token)
	{
		printf(
			"Expected result:\t\"%s\"\nft_strtok:\t\t\"%s\"\n",
			ref[i], token);
		cmp_str += strcmp(ref[i], token);
		ft_strdel(&token);
		token = ft_strtok(NULL, delim2);
		i++;
	}
	ft_strdel(&token);
	check_return(cmp_str == 0);
}

void		test_ft_strtok(void)
{
	char	*s;
	char	*delim0 = "";
	char	*delim1 = " ";
	char	*delim2 = "-";
	char	*delim3 = " -!";
	char	*delim4 = "A-";
	char	*delim5 = " AD!";
	char	*ref1[8] = { "AAAA", "-", "BBB", "--", "C", "-!", "DD", "!!" };
	char	*ref2[4] = { "     AAAA   ", " BBB ", " C ", "! DD !!   " };
	char	*ref3[4] = { "AAAA", "BBB", "C", "DD" };
	char	*ref4[4] = { "     AAAA   ", "BBB", "C", "DD" };
	char	*ref5[6] = { "     ", "-", "BBB", "--", "C", "-" };
	char	*ref6[1] = { "     AAAA   - BBB -- C -! DD !!   " };

	s = ft_strdup("     AAAA   - BBB -- C -! DD !!   ");
	g_results->test_num = 0;
	PRINT_TEST_NAME("FT_STRTOK");
	compare_tokens(s, delim1, delim1, ref1);
	compare_tokens(s, delim2, delim2, ref2);
	compare_tokens(s, delim3, delim3, ref3);
	compare_tokens(s, delim2, delim3, ref4);
	compare_tokens(s, delim4, delim5, ref5);
	compare_tokens(s, delim0, delim0, ref6);
	ft_strdel(&s);
	PRINT_SEP();
}
