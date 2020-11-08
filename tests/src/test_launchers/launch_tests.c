/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 00:12:49 by mboivin           #+#    #+#             */
/*   Updated: 2020/11/08 15:32:33 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void		launch_tests(void)
{
	g_results = malloc_result();
	PRINT_TITLE("LIBFT TESTS");
	launch_conv_tests();
	launch_ctype_tests();
	launch_num_tests();
	launch_str_tests();
	launch_list_tests();
}
