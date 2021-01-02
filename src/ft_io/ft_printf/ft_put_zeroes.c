/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_zeroes.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 23:20:53 by mboivin           #+#    #+#             */
/*   Updated: 2021/01/02 21:56:37 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_printf.h"

/*
** Function: Outputs zeroes to the standard output
**
** len: The size of the output string
** spec: A structure containing the retrieved formatting data
**
** returns: The count of printed characters
*/

int	ft_put_zeroes(int len, t_spec *spec)
{
	int	printed;
	int	zeroes;

	printed = 0;
	zeroes = spec->prec - len;
	while (zeroes--)
		printed += write(spec->dst_fd, "0", 1);
	return (printed);
}
