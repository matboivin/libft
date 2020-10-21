/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_is_full.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 13:32:13 by mboivin           #+#    #+#             */
/*   Updated: 2020/10/21 14:26:35 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function checks whether the stack is full
** Last member reached the maximum capacity (minus 1)
*/

bool	ft_stack_is_full(t_stack *stack)
{
	return ((size_t)(stack->top + 1) == stack->capacity);
}
