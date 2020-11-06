/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 00:12:49 by mboivin           #+#    #+#             */
/*   Updated: 2020/11/06 15:00:52 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "libft_test.h"

static void	check_isalpha(int c)
{
	int		isalpha_ret;
	int		ft_ret;

	g_results->test_num++;
	PRINT_TEST_NUMBER(g_results->test_num);
	isalpha_ret = isalpha(c);
	ft_ret = ft_isalpha(c);
	printf("isalpha:\t\"%d\"\n", isalpha_ret);
	printf("ft_isalpha:\t\"%d\"\n", ft_ret);
	check_return(check_recon_char(isalpha_ret, ft_ret));
}

void		test_ft_isalpha(void)
{
	g_results->test_num = 0;
	PRINT_TEST_NAME("FT_ISALPHA");
	check_isalpha('a');
	check_isalpha('A');
	check_isalpha('0');
	check_isalpha('9');
	check_isalpha(';');
	check_isalpha('.');
	check_isalpha('!');
	PRINT_SEP();
}
