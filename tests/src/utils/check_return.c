/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_return.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 00:12:49 by mboivin           #+#    #+#             */
/*   Updated: 2020/11/05 16:44:33 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

/*
** Assert return values are the same
*/

void		check_return(bool condition)
{
	g_results->total += 1;
	if (condition)
	{
		g_results->passed += 1;
		PRINT_TEST_OK();
	}
	else
		PRINT_TEST_KO();
}
