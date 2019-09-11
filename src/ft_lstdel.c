/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 16:35:38 by mboivin           #+#    #+#             */
/*   Updated: 2019/06/26 21:11:09 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function takes as a parameter the adress of a pointer to a link and
** frees the memory of this link and every successors of that link using the
** functions del and free(3). Finally the pointer to the link that was just
** freed must be set to NULL (quite similar to the function ft_memdel from
** the mandatory part).
*/

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;
	t_list	*p;

	if (alst && del)
	{
		tmp = *alst;
		while (tmp)
		{
			p = tmp->next;
			del(tmp->content, tmp->content_size);
			free(tmp);
			tmp = p;
		}
		*alst = NULL;
	}
}
