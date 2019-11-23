/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 21:17:01 by mboivin           #+#    #+#             */
/*   Updated: 2019/11/23 21:20:05 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstswap(t_list *a, t_list *prev_a, t_list *b, t_list *prev_b)
{
	t_list	*tmp;

	if (a && b)
	{
		if (prev_a)
			prev_a->next = b;
		if (prev_b)
			prev_b->next = a;
		tmp = a->next;
		a->next = b->next;
		b->next = b;
	}
}
