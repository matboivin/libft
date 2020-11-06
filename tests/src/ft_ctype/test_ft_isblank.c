/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isblank.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 00:12:49 by mboivin           #+#    #+#             */
/*   Updated: 2020/11/06 16:17:26 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "libft_test.h"

static void	check_isblank(int c)
{
	int		isblank_ret;
	int		ft_ret;

	g_results->test_num++;
	PRINT_TEST_NUMBER(g_results->test_num);
	isblank_ret = isblank(c);
	ft_ret = ft_isblank(c);
	printf("isblank:\t\"%d\"\n", isblank_ret);
	printf("ft_isblank:\t\"%d\"\n", ft_ret);
	check_return(check_recon_char(isblank_ret, ft_ret));
}

void		test_ft_isblank(void)
{
	g_results->test_num = 0;
	PRINT_TEST_NAME("FT_ISBLANK");
	check_isblank(' ');
	check_isblank('\t');
	check_isblank('\r');
	check_isblank('\f');
	check_isblank('a');
	check_isblank('.');
	check_isblank('!');
	PRINT_SEP();
}
