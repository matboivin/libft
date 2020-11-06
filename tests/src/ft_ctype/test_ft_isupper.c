/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isupper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 00:12:49 by mboivin           #+#    #+#             */
/*   Updated: 2020/11/06 16:22:04 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "libft_test.h"

static void	check_isupper(int c)
{
	int		isupper_ret;
	int		ft_ret;

	g_results->test_num++;
	PRINT_TEST_NUMBER(g_results->test_num);
	isupper_ret = isupper(c);
	ft_ret = ft_isupper(c);
	printf("isupper:\t\"%d\"\n", isupper_ret);
	printf("ft_isupper:\t\"%d\"\n", ft_ret);
	check_return(check_recon_char(isupper_ret, ft_ret));
}

void		test_ft_isupper(void)
{
	g_results->test_num = 0;
	PRINT_TEST_NAME("FT_ISUPPER");
	check_isupper('a');
	check_isupper('c');
	check_isupper('A');
	check_isupper('0');
	check_isupper('B');
	check_isupper('.');
	PRINT_SEP();
}
