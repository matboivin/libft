/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_increase_stack.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 13:36:30 by mboivin           #+#    #+#             */
/*   Updated: 2020/10/21 14:32:26 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function doubles the capacity of the stack
*/

void	ft_increase_stack(t_stack *stack)
{
	stack->capacity *= 2;
	stack->content = reallocarray(stack->content, stack->capacity, sizeof(int));
}
