/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 16:34:37 by mboivin           #+#    #+#             */
/*   Updated: 2018/11/26 11:53:18 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function takes as a parameter a link’s pointer address and frees the
** memory of the link’s content using the function del given as a parameter,
** then frees the link’s memory using free(3). The memory of next musnt not be
** freed under any circumstance. Finally, the pointer to the link that was just
** freed must be set to NULL (quite similar to the function ft_memdel in the
** mandatory part).
*/

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (alst && del)
	{
		del((*alst)->content, (*alst)->content_size);
		free(*alst);
		*alst = NULL;
	}
}
