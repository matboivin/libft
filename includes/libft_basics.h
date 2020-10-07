/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_basics.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 09:30:53 by mboivin           #+#    #+#             */
/*   Updated: 2020/10/07 23:04:12 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_BASICS_H
# define LIBFT_BASICS_H

void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memalloc(size_t size);
void	*ft_memccpy(void *dst, void const *src, int c, size_t n);
void	*ft_memchr(void const *s, int c, size_t n);
int		ft_memcmp(void const *s1, void const *s2, size_t n);
void	*ft_memcpy(void *dst, void const *src, size_t n);
void	ft_memdel(void **to_free);
void	*ft_memmove(void *dst, void const *src, size_t len);
void	*ft_memset(void *s, int c, size_t len);
void	*ft_realloc(void *ptr, size_t size);
void	*ft_reallocarray(void *ptr, size_t nmemb, size_t size);

void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl(char *s);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr(int n);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr(char *s);
void	ft_putstr_fd(char *s, int fd);

int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_charcount(char c, char *s);

bool	ft_isalnum(int c);
bool	ft_isalpha(int c);
bool	ft_isascii(int c);
bool	ft_isblank(int c);
bool	ft_ischarset(char c, const char *set);
bool	ft_iscntrl(int c);
bool	ft_isdigit(int c);
bool	ft_islower(int c);
bool	ft_isprint(int c);
bool	ft_isspace(int c);
bool	ft_isupper(int c);
bool	ft_isnumeric(char *s);

char	**ft_split(const char *s, char c);
char	*ft_strappend(char *s, char *suffix);
char	*ft_strcat(char *dst, const char *src);
char	*ft_strchr(const char *s, int c);
void	ft_strclr(char *s);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strcpy(char *dst, const char *src);
void	ft_strdel(char **to_free);
char	*ft_strdup(const char *s1);
int		ft_strequ(const char *s1, const char *s2);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strjoindel(char *s1, char *s2);
char	*ft_strjoindelone(char *s1, char *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *s);
char	*ft_strmap(const char *s, char (*f)(char));
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));
char	*ft_strncat(char *s1, const char *s2, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strncpy(char *dst, const char *src, size_t len);
int		ft_strnequ(const char *s1, const char *s2, size_t n);
char	*ft_strnew(size_t size);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strprepend(const char *prefix, char *s);
char	*ft_strrchr(const char *s, int c);
char	*ft_strrep(char *src, int size);
char	*ft_strrev(char *s);
char	*ft_strstr(const char *s, const char *needle);
char	*ft_strtrim(const char *s, const char *set);
char	*ft_substr(const char *s, unsigned int start, size_t len);
char	*ft_strupcase(char *s);
char	*ft_strlowcase(char *s);

size_t	ft_tablen(char **tab);
void	ft_tabdel(char **to_free);

int		ft_atoi(const char *s);
int		ft_atoi_base(const char *s, int base);
char	*ft_atos(char c);
char	*ft_itoa(int n);
char	*ft_itoa_base(int n, int base);
char	*ft_utoa(unsigned long long n);
char	*ft_utoa_base(unsigned long long n, int base);
double	ft_strtod(const char *s, char **endptr);

void	ft_swap(int *a, int *b);
int		ft_nbrlen(int n);
int		ft_nbrlen_base(int n, int base);
int		ft_unbrlen_base(unsigned long long n, int base);
bool	ft_n_range(int x, int start, int end);
bool	ft_f_range(double x, double start, double end);

int		get_next_line(int fd, char **line);

#endif
