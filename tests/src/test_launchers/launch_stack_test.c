/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_stack_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 18:23:23 by mboivin           #+#    #+#             */
/*   Updated: 2021/01/16 18:23:39 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	launch_stack_tests(void)
{
	PRINT_TITLE("STACK");
	test_ft_stack();
	PRINT_TEST_RESULTS(g_results->passed, g_results->total);
}
