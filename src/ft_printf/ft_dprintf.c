/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/11 11:54:32 by mboivin           #+#    #+#             */
/*   Updated: 2020/09/10 23:52:56 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_dprintf(int fd, const char *format, ...)
{
	va_list	ap;
	int		printed;

	va_start(ap, format);
	printed = ft_construct_output(fd, format, ap);
	va_end(ap);
	return (printed);
}
