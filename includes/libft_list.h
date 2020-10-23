/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_list.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 09:30:53 by mboivin           #+#    #+#             */
/*   Updated: 2020/10/24 00:42:31 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_LIST_H
# define LIBFT_LIST_H
# include <stdlib.h>

typedef struct		s_node
{
	void			*content;
	struct s_node	*next;
}					t_node;

void				ft_lstappend(t_node **head, t_node *new_node);
t_node				*ft_lstat(t_node *head, unsigned int n);
void				ft_lstdel(t_node **node, void (*del)(void *));
void				ft_lstdelif(t_node **head, void *data_ref);
void				ft_lstdelone(t_node *to_free, void (*del)(void *));
t_node				*ft_lstfind(t_node *head, void *data_ref);
void				ft_lstiter(t_node *node, void (*f)(void *));
void				ft_lstiterif(
	t_node *lst, void (*f)(void *), void *data_ref);
t_node				*ft_lstlast(t_node *node);
t_node				*ft_lstmap(
	t_node *node, void *(*f)(void *), void (*del)(void *));
t_node				*ft_lstnew(void *p_content);
void				ft_lstprepend(t_node **head, t_node *new_node);
void				ft_lstrev(t_node **head);
int					ft_lstsize(t_node *head);
void				ft_lstsort(t_node **head, int (*cmp)());
void				ft_lstswap(
	t_node *a, t_node *prev_a, t_node *b, t_node *prev_b);

#endif
