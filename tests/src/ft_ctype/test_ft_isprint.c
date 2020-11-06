/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isprint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 00:12:49 by mboivin           #+#    #+#             */
/*   Updated: 2020/11/06 16:26:52 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "libft_test.h"

static void	check_isprint(int c)
{
	int		isprint_ret;
	int		ft_ret;

	g_results->test_num++;
	PRINT_TEST_NUMBER(g_results->test_num);
	isprint_ret = isprint(c);
	ft_ret = ft_isprint(c);
	printf("isprint:\t\"%d\"\n", isprint_ret);
	printf("ft_isprint:\t\"%d\"\n", ft_ret);
	check_return(check_recon_char(isprint_ret, ft_ret));
}

void		test_ft_isprint(void)
{
	g_results->test_num = 0;
	PRINT_TEST_NAME("FT_ISPRINT");
	check_isprint(0);
	check_isprint(31);
	check_isprint(32);
	check_isprint(65);
	check_isprint(126);
	check_isprint(127);
	PRINT_SEP();
}
