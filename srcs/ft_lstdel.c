/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 16:35:38 by mboivin           #+#    #+#             */
/*   Updated: 2018/11/26 14:35:04 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;
	t_list	*ptr;

	if (alst && del)
	{
		tmp = *alst;
		while (tmp)
		{
			ptr = tmp->next;
			del(tmp->content, tmp->content_size);
			free(tmp);
			tmp = ptr;
		}
		*alst = NULL;
	}
}
