/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   select_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 15:15:06 by mboivin           #+#    #+#             */
/*   Updated: 2020/11/06 15:15:38 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	select_test(char *option)
{
	g_results = malloc_result();
	PRINT_TITLE("LIBFT TESTS");
	(void)option;
	PRINT_TEST_RESULTS(g_results->passed, g_results->total);
}
