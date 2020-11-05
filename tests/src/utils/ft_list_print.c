/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_print.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 00:12:49 by mboivin           #+#    #+#             */
/*   Updated: 2020/11/05 17:48:21 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

/*
** List utils
*/

void	ft_list_print(t_node *node)
{
	int	i;

	if (node)
	{
		i = 1;
		while (node)
		{
			printf("node %d -> content: \"%s\"\n", i, (char *)node->content);
			node = node->next;
			i++;
		}
	}
	else
		printf("NULL\n");
}
