/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isspace.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 00:12:49 by mboivin           #+#    #+#             */
/*   Updated: 2020/11/06 16:27:50 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "libft_test.h"

static void	check_isspace(int c)
{
	int		isspace_ret;
	int		ft_ret;

	g_results->test_num++;
	PRINT_TEST_NUMBER(g_results->test_num);
	isspace_ret = isspace(c);
	ft_ret = ft_isspace(c);
	printf("isspace:\t\"%d\"\n", isspace_ret);
	printf("ft_isspace:\t\"%d\"\n", ft_ret);
	check_return(check_recon_char(isspace_ret, ft_ret));
}

void		test_ft_isspace(void)
{
	g_results->test_num = 0;
	PRINT_TEST_NAME("FT_ISSPACE");
	check_isspace(' ');
	check_isspace('\t');
	check_isspace('\f');
	check_isspace('\v');
	check_isspace('\n');
	check_isspace('\r');
	check_isspace('0');
	check_isspace('!');
	PRINT_SEP();
}
