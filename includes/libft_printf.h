/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_printf.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/11 11:51:30 by mboivin           #+#    #+#             */
/*   Updated: 2020/09/10 23:53:06 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_PRINTF_H
# define LIBFT_PRINTF_H

# include <stdarg.h>

# define OCT_PREFIX "0"
# define LOWHEX_PREFIX "0x"
# define UPHEX_PREFIX "0X"

typedef enum			e_flag
{
	LEFTALIGN = 1 << 0,
	ZERO = 1 << 1,
	PLUS = 1 << 2,
	SPACE = 1 << 3,
	ALT = 1 << 4
}						t_flag;

typedef struct			s_spec
{
	t_flag				flag;
	int					width;
	int					prec;
	int					modifier;
	char				type;
	int					dst_fd;
}						t_spec;

typedef	int				(*t_conv_func)(t_spec *spec, va_list ap);

typedef struct			s_conv
{
	char				type;
	t_conv_func			func;
}						t_conv;

int						ft_printf(const char *format, ...);
int						ft_dprintf(int fd, const char *format, ...);
int						ft_construct_output(
	int fd, const char *format, va_list ap);
int						ft_parse_format(
	int fd, const char **format, va_list ap);
void					get_flags(const char **format, t_spec *spec);
void					get_width(
	const char **format, t_spec *spec, va_list ap);
void					get_precision(
	const char **format, t_spec *spec, va_list ap);
void					get_length(const char **format, t_spec *spec);
void					get_type(const char **format, char c, t_spec *spec);
int						get_arg(va_list ap);
int						get_digits(const char *format);
int						ft_handle_char(t_spec *spec, va_list ap);
int						ft_handle_str(t_spec *spec, va_list ap);
int						ft_handle_ptr(t_spec *spec, va_list ap);
int						ft_handle_int(t_spec *spec, va_list ap);
int						ft_handle_uint(t_spec *spec, va_list ap);
int						ft_handle_hex(t_spec *spec, va_list ap);
int						ft_handle_oct(t_spec *spec, va_list ap);
int						ft_handle_percent(t_spec *spec, va_list ap);
int						ft_printf_nbr(char *s, t_spec *spec, int arg);
int						ft_put_padding(int pad, int len, t_spec *spec);
int						ft_put_zeroes(int len, t_spec *spec);
bool					ft_is_prefix(int c);
char					*ft_add_prefix(char *s, t_spec *spec);

#endif
