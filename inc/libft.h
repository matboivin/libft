/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 09:30:53 by mboivin           #+#    #+#             */
/*   Updated: 2020/01/13 12:18:12 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <limits.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

void				ft_bzero(void *s, size_t n);
void				*ft_calloc(size_t count, size_t size);
void				*ft_memalloc(size_t size);
void				*ft_memccpy(void *dst, void const *src, int c, size_t n);
void				*ft_memchr(void const *s, int c, size_t n);
int					ft_memcmp(void const *s1, void const *s2, size_t n);
void				*ft_memcpy(void *dst, void const *src, size_t n);
void				ft_memdel(void **ap);
void				*ft_memmove(void *dst, void const *src, size_t len);
void				*ft_memset(void *s, int c, size_t len);

void				ft_putchar(char c);
void				ft_putchar_fd(char c, int fd);
void				ft_putendl(char *s);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr(int n);
void				ft_putnbr_fd(int n, int fd);
void				ft_putstr(char *s);
void				ft_putstr_fd(char *s, int fd);

int					ft_tolower(int c);
int					ft_toupper(int c);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isblank(int c);
int					ft_ischarset(char c, char const *set);
int					ft_iscntrl(int c);
int					ft_isdigit(int c);
int					ft_islower(int c);
int					ft_isprint(int c);
int					ft_isspace(int c);
int					ft_isupper(int c);

char				**ft_split(char const *s, char c);
char				*ft_strcat(char *s1, char const *s2);
char				*ft_strchr(char const *s, int c);
void				ft_strclr(char *s);
int					ft_strcmp(char const *s1, char const *s2);
char				*ft_strcpy(char *dst, char const *src);
void				ft_strdel(char **as);
char				*ft_strdup(char const *s1);
int					ft_strequ(char const *s1, char const *s2);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strjoin(char const *s1, char const *s2);
size_t				ft_strlcat(char *dst, char const *src, size_t size);
size_t				ft_strlcpy(char *dst, char const *src, size_t size);
size_t				ft_strlen(char const *s);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strncat(char *s1, char const *s2, size_t n);
int					ft_strncmp(char const *s1, char const *s2, size_t n);
char				*ft_strncpy(char *dst, char const *src, size_t len);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strnew(size_t size);
char				*ft_strnstr(
	char const *haystack, char const *needle, size_t len);
char				*ft_strrchr(char const *s, int c);
char				*ft_strrev(char *s);
char				*ft_strstr(char const *s, char const *needle);
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_substr(char const *s, unsigned int start, size_t len);

t_list				*ft_lstat(t_list *lst, unsigned int nbr);
t_list				*ft_lstnew(void *content);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstadd_front(t_list **lst, t_list *new);
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

int					ft_atoi(char const *str);
char				*ft_itoa(int n);

void				ft_swap(int *a, int *b);
size_t				ft_nbrlen(int n);
int					get_next_line(int fd, char **line);

#endif
