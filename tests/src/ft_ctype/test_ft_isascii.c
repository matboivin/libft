/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isascii.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 00:12:49 by mboivin           #+#    #+#             */
/*   Updated: 2020/11/06 16:16:51 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "libft_test.h"

static void	check_isascii(int c)
{
	int		isascii_ret;
	int		ft_ret;

	g_results->test_num++;
	PRINT_TEST_NUMBER(g_results->test_num);
	isascii_ret = isascii(c);
	ft_ret = ft_isascii(c);
	printf("isascii:\t\"%d\"\n", isascii_ret);
	printf("ft_isascii:\t\"%d\"\n", ft_ret);
	check_return(check_recon_char(isascii_ret, ft_ret));
}

void		test_ft_isascii(void)
{
	g_results->test_num = 0;
	PRINT_TEST_NAME("FT_ISASCII");
	check_isascii(0);
	check_isascii('A');
	check_isascii('0');
	check_isascii('9');
	check_isascii(127);
	check_isascii(128);
	check_isascii(129);
	PRINT_SEP();
}
