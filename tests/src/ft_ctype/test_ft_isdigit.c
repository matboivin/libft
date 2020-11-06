/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isdigit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 00:12:49 by mboivin           #+#    #+#             */
/*   Updated: 2020/11/06 15:00:41 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "libft_test.h"

static void	check_isdigit(int c)
{
	int		isdigit_ret;
	int		ft_ret;

	g_results->test_num++;
	PRINT_TEST_NUMBER(g_results->test_num);
	isdigit_ret = isdigit(c);
	ft_ret = ft_isdigit(c);
	printf("isdigit:\t\"%d\"\n", isdigit_ret);
	printf("ft_isdigit:\t\"%d\"\n", ft_ret);
	check_return(check_recon_char(isdigit_ret, ft_ret));
}

void		test_ft_isdigit(void)
{
	g_results->test_num = 0;
	PRINT_TEST_NAME("FT_ISDIGIT");
	check_isdigit('0');
	check_isdigit('1');
	check_isdigit('2');
	check_isdigit('9');
	check_isdigit('a');
	check_isdigit('A');
	check_isdigit(';');
	check_isdigit('.');
	check_isdigit('!');
	PRINT_SEP();
}
