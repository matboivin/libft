/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_to_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 13:36:30 by mboivin           #+#    #+#             */
/*   Updated: 2020/10/21 14:03:40 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function inserts an object at the top of the stack
*/

void	ft_push_to_stack(t_stack *stack, int to_add)
{
	if (ft_stack_is_full(stack))
		ft_increase_stack(stack);
	stack->top += 1;
	stack->content[stack->top] = to_add;
}
