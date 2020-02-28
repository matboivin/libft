/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_basics.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 09:30:53 by mboivin           #+#    #+#             */
/*   Updated: 2020/02/28 15:17:23 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_BASICS_H
# define LIBFT_BASICS_H

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
t_bool				ft_isalnum(int c);
t_bool				ft_isalpha(int c);
t_bool				ft_isascii(int c);
t_bool				ft_isblank(int c);
t_bool				ft_ischarset(char c, char const *set);
t_bool				ft_iscntrl(int c);
t_bool				ft_isdigit(int c);
t_bool				ft_islower(int c);
t_bool				ft_isprint(int c);
t_bool				ft_isspace(int c);
t_bool				ft_isupper(int c);

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
char				*ft_strjoindel(char *s1, char *s2);
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

int					ft_atoi(char const *str);
char				*ft_itoa(int n);

void				ft_swap(int *a, int *b);
size_t				ft_nbrlen(int n);
int					get_next_line(int fd, char **line);

#endif
