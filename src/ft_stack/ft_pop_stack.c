/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pop_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 13:36:22 by mboivin           #+#    #+#             */
/*   Updated: 2020/10/22 20:57:56 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function removes and returns the object at the top of the stack
*/

int		ft_pop_stack(t_stack *stack)
{
	int	top_obj;

	top_obj = ft_peek_stack(stack);
	if (top_obj > DEFAULT_TOP_VAL)
		stack->top -= 1;
	return (top_obj);
}
