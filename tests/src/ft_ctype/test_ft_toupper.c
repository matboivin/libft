/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_toupper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 00:12:49 by mboivin           #+#    #+#             */
/*   Updated: 2020/11/06 16:30:03 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "libft_test.h"

static void	check_toupper(int c)
{
	int		toupper_ret;
	int		ft_ret;

	g_results->test_num++;
	PRINT_TEST_NUMBER(g_results->test_num);
	toupper_ret = toupper(c);
	ft_ret = ft_toupper(c);
	printf("toupper:\t\"%d\"\n", toupper_ret);
	printf("ft_toupper:\t\"%d\"\n", ft_ret);
	check_return(check_recon_char(toupper_ret, ft_ret));
}

void		test_ft_toupper(void)
{
	g_results->test_num = 0;
	PRINT_TEST_NAME("FT_TOUPPER");
	check_toupper('A');
	check_toupper('B');
	check_toupper('a');
	check_toupper('0');
	check_toupper('9');
	check_toupper('b');
	check_toupper('c');
	check_toupper('d');
	PRINT_SEP();
}
