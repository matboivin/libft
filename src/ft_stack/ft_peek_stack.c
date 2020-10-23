/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_peek_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 13:36:22 by mboivin           #+#    #+#             */
/*   Updated: 2020/10/23 23:56:36 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_stack.h"

/*
** This function returns the object at the top of the stack
*/

int		ft_peek_stack(t_stack *stack)
{
	if (ft_stack_is_empty(stack))
		return (DEFAULT_TOP_VAL);
	return (stack->content[stack->top]);
}
