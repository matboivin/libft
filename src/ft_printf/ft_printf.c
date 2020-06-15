/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/11 11:54:32 by mboivin           #+#    #+#             */
/*   Updated: 2020/06/15 14:46:25 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_printf(const char *format, ...)
{
	va_list	ap;
	int		printed;

	va_start(ap, format);
	printed = construct_output(STDOUT_FILENO, format, ap);
	va_end(ap);
	return (printed);
}
