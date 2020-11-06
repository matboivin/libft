/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_tolower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 00:12:49 by mboivin           #+#    #+#             */
/*   Updated: 2020/11/06 16:29:51 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "libft_test.h"

static void	check_tolower(int c)
{
	int		tolower_ret;
	int		ft_ret;

	g_results->test_num++;
	PRINT_TEST_NUMBER(g_results->test_num);
	tolower_ret = tolower(c);
	ft_ret = ft_tolower(c);
	printf("tolower:\t\"%d\"\n", tolower_ret);
	printf("ft_tolower:\t\"%d\"\n", ft_ret);
	check_return(check_recon_char(tolower_ret, ft_ret));
}

void		test_ft_tolower(void)
{
	g_results->test_num = 0;
	PRINT_TEST_NAME("FT_TOLOWER");
	check_tolower('a');
	check_tolower('b');
	check_tolower('A');
	check_tolower('0');
	check_tolower('9');
	check_tolower('B');
	check_tolower('C');
	check_tolower('D');
	PRINT_SEP();
}
