/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalnum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 00:12:49 by mboivin           #+#    #+#             */
/*   Updated: 2020/11/06 15:01:01 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "libft_test.h"

static void	check_isalnum(int c)
{
	int		isalnum_ret;
	int		ft_ret;

	g_results->test_num++;
	PRINT_TEST_NUMBER(g_results->test_num);
	isalnum_ret = isalnum(c);
	ft_ret = ft_isalnum(c);
	printf("isalnum:\t\"%d\"\n", isalnum_ret);
	printf("ft_isalnum:\t\"%d\"\n", ft_ret);
	check_return(check_recon_char(isalnum_ret, ft_ret));
}

void		test_ft_isalnum(void)
{
	g_results->test_num = 0;
	PRINT_TEST_NAME("FT_ISALNUM");
	check_isalnum('a');
	check_isalnum('A');
	check_isalnum('0');
	check_isalnum('9');
	check_isalnum(';');
	check_isalnum('.');
	check_isalnum('!');
	PRINT_SEP();
}
