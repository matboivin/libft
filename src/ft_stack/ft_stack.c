/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 13:12:29 by mboivin           #+#    #+#             */
/*   Updated: 2020/10/21 14:22:45 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Stack (LIFO)
**
** create_stack()   :  Constructor
** malloc_stack()   :  Malloc function
** destroy_stack()  :  Destructor
** free_stack()     :  Free function
*/

void		create_stack(t_stack *stack, size_t capacity)
{
	stack->capacity = capacity;
	stack->top = DEFAULT_TOP_VAL;
	stack->content = ft_calloc(capacity, sizeof(int));
}

t_stack		*malloc_stack(size_t capacity)
{
	t_stack	*result;

	result = malloc(sizeof(t_stack *));
	if (!result)
		return (NULL);
	create_stack(result, capacity);
	return (result);
}

void		destroy_stack(t_stack to_destroy)
{
	to_destroy.capacity = 0;
	to_destroy.top = DEFAULT_TOP_VAL;
	free(to_destroy.content);
}

void		free_stack(t_stack *to_free)
{
	destroy_stack(*to_free);
	free(to_free);
}
