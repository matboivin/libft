/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_islower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 00:12:49 by mboivin           #+#    #+#             */
/*   Updated: 2020/11/06 16:21:18 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "libft_test.h"

static void	check_islower(int c)
{
	int		islower_ret;
	int		ft_ret;

	g_results->test_num++;
	PRINT_TEST_NUMBER(g_results->test_num);
	islower_ret = islower(c);
	ft_ret = ft_islower(c);
	printf("islower:\t\"%d\"\n", islower_ret);
	printf("ft_islower:\t\"%d\"\n", ft_ret);
	check_return(check_recon_char(islower_ret, ft_ret));
}

void		test_ft_islower(void)
{
	g_results->test_num = 0;
	PRINT_TEST_NAME("FT_ISLOWER");
	check_islower('a');
	check_islower('c');
	check_islower('A');
	check_islower('0');
	check_islower('B');
	check_islower('.');
	PRINT_SEP();
}
