/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_recon_char.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 00:12:49 by mboivin           #+#    #+#             */
/*   Updated: 2020/11/06 15:00:01 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include "libft_test.h"

/*
** Check return value of ctype functions tests
*/

bool	check_recon_char(int ret, int ft_ret)
{
	if ((ret == 0) && (ft_ret == 0))
		return (true);
	if ((ret > 0) && (ft_ret > 0))
		return (true);
	return (false);
}
