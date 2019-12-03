/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiterif.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 21:40:44 by mboivin           #+#    #+#             */
/*   Updated: 2019/12/03 21:12:53 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** function: Iterates the list lst and applies the function f to the content of
** elements that are "equal" to the reference information
**
** lst: The address of a pointer to a element
** f: The address of the function to iterate on the list
** data_ref: The data to be compared to the content
*/

void		ft_lstiterif(t_list *lst, void (*f)(void *), void *data_ref)
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		if (lst->content == data_ref)
			f(lst->content);
		lst = lst->next;
	}
}
