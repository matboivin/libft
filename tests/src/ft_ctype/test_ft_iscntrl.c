/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_iscntrl.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 00:12:49 by mboivin           #+#    #+#             */
/*   Updated: 2020/11/06 16:20:51 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "libft_test.h"

static void	check_iscntrl(int c)
{
	int		iscntrl_ret;
	int		ft_ret;

	g_results->test_num++;
	PRINT_TEST_NUMBER(g_results->test_num);
	iscntrl_ret = iscntrl(c);
	ft_ret = ft_iscntrl(c);
	printf("iscntrl:\t\"%d\"\n", iscntrl_ret);
	printf("ft_iscntrl:\t\"%d\"\n", ft_ret);
	check_return(check_recon_char(iscntrl_ret, ft_ret));
}

void		test_ft_iscntrl(void)
{
	g_results->test_num = 0;
	PRINT_TEST_NAME("FT_ISCNTRL");
	check_iscntrl(0);
	check_iscntrl(31);
	check_iscntrl(60);
	check_iscntrl(65);
	check_iscntrl(127);
	PRINT_SEP();
}
