/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_recon.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 09:30:53 by mboivin           #+#    #+#             */
/*   Updated: 2020/10/24 00:43:20 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_RECON_H
# define LIBFT_RECON_H
# include <stdbool.h>

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

#endif
