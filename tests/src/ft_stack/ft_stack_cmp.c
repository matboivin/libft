/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_cmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 18:32:33 by mboivin           #+#    #+#             */
/*   Updated: 2021/01/16 19:21:39 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

/*
** Returns 0 if stack is equal to reference
*/

int			ft_stack_cmp(t_stack *test_stack, char **ref)
{
	int		i;
	char	*s;

	if (!test_stack || !ref)
		return (1);
	i = test_stack->top + 1;
	s = NULL;
	while (i--)
	{
		s = ft_pop_stack(test_stack);
		ft_printf("%s <-> %s\n", s, ref[i]);
		if (ft_strcmp(s, ref[i]))
			return (1);
	}
	return (0);
}
