/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_printf.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/11 11:51:30 by mboivin           #+#    #+#             */
/*   Updated: 2020/06/13 16:54:39 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_PRINTF_H
# define LIBFT_PRINTF_H

# include <stdarg.h>

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
}						t_spec;

typedef	int				(*t_conv_func)(t_spec *spec, va_list ap);

typedef struct			s_conv
{
	char				type;
	t_conv_func			func;
}						t_conv;

extern struct s_conv	g_conv[];

int						ft_printf(const char *format, ...);

int						construct_output(const char *format, va_list ap);
int						output(t_spec *spec, va_list ap);

void					create_spec(t_spec *spec);
int						parse_formatting(const char **format, va_list ap);
void					get_flags(const char **format, t_spec *spec);
void					get_width(
	const char **format, t_spec *spec, va_list ap);
void					get_precision(
	const char **format, t_spec *spec, va_list ap);
void					get_length(const char **format, t_spec *spec);
void					get_type(const char **format, char c, t_spec *spec);
int						get_arg(va_list ap);
int						get_digits(const char *format);

int						conv_c(t_spec *spec, va_list ap);
int						conv_s(t_spec *spec, va_list ap);
int						conv_p(t_spec *spec, va_list ap);
int						conv_int(t_spec *spec, va_list ap);
int						conv_uint(t_spec *spec, va_list ap);
int						conv_hex(t_spec *spec, va_list ap);
int						conv_o(t_spec *spec, va_list ap);
int						conv_percent(t_spec *spec, va_list ap);
intmax_t				length_int(t_spec *spec, va_list ap);
uintmax_t				length_uint(t_spec *spec, va_list ap);

int						format_nbr(char *s, t_spec *spec, int arg);
int						format_str(char *s, t_spec *spec);
int						format_ptr(char *s, t_spec *spec);
int						format_int(char *s, int pad, int len, t_spec *spec);
int						format_zero(char *s, t_spec *spec);
int						format_char(char *s, t_spec *spec);
int						put_padding(int pad, int len, t_spec *spec);
int						put_zeroes(int len, t_spec *spec);
int						is_prefix(int c);
char					*add_prefix(char *s, t_spec *spec);

#endif
