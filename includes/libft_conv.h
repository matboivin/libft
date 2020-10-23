/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_conv.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 09:30:53 by mboivin           #+#    #+#             */
/*   Updated: 2020/10/24 00:42:15 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_CONV_H
# define LIBFT_CONV_H
# include <stdbool.h>
# include <stdint.h>
# include <stdlib.h>

# define BINARY_BASE 2
# define OCT_BASE 8

int		ft_atoi(const char *s);
int		ft_atoi_base(const char *s, int base);
char	*ft_atos(char c);
char	*ft_itoa(int n);
char	*ft_itoa_base(int n, int base);
char	*ft_utoa(int64_t n);
char	*ft_utoa_base(int64_t n, int base);
double	ft_strtod(const char *s, char **endptr);

#endif