/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_test_input.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 19:15:10 by mboivin           #+#    #+#             */
/*   Updated: 2020/11/09 19:01:31 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	print_test_input(char *input1, char *input2)
{
	if (input1 && input2)
		printf(
			" s1 -> \"%s\" | s2 -> \"%s\"\n",
			(char *)input1, (char *)input2);
	else if (input1)
		printf("Input -> \"%s\"\n", (char *)input1);
	printf("\n");
}
