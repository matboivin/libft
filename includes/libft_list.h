/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_list.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 09:30:53 by mboivin           #+#    #+#             */
/*   Updated: 2020/09/10 22:19:59 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_LIST_H
# define LIBFT_LIST_H

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list				*ft_lstat(t_list *lst, unsigned int nbr);
t_list				*ft_lstnew(void *content);
void				ft_lstappend(t_list **lst, t_list *new_elem);
void				ft_lstprepend(t_list **lst, t_list *new_elem);
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstdelif(t_list **lst, void *data_ref);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
t_list				*ft_lstfind(t_list *lst, void *data_ref);
void				ft_lstiter(t_list *lst, void (*f)(void *));
void				ft_lstiterif(
	t_list *lst, void (*f)(void *), void *data_ref);
t_list				*ft_lstlast(t_list *lst);
t_list				*ft_lstmap(
	t_list *lst, void *(*f)(void *), void (*del)(void *));
void				ft_lstrev(t_list **lst);
int					ft_lstsize(t_list *lst);
void				ft_lstsort(t_list **lst, int (*cmp)());
void				ft_lstswap(
	t_list *a, t_list *prev_a, t_list *b, t_list *prev_b);

#endif
