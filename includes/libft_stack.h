/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_stack.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 13:08:24 by mboivin           #+#    #+#             */
/*   Updated: 2020/10/21 14:22:52 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_STACK_H
# define LIBFT_STACK_H

# define DEFAULT_TOP_VAL -1

/*
** Stack (LIFO)
**
** capacity: Maximum capacity of the stack
** top: Top of the stack
** content: The data
*/

typedef struct	s_stack
{
	size_t		capacity;
	int			top;
	int			*content;
}				t_stack;

void			create_stack(t_stack *stack, size_t capacity);
t_stack			*malloc_stack(size_t capacity);
void			destroy_stack(t_stack stack);
void			free_stack(t_stack *to_free);

bool			ft_stack_is_empty(t_stack *stack);
bool			ft_stack_is_full(t_stack *stack);
void			ft_increase_stack(t_stack *stack);
void			ft_push_to_stack(t_stack *stack, int to_add);
int				ft_peek_stack(t_stack *stack);
int				ft_pop_stack(t_stack *stack);

#endif
