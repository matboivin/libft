/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_struct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/11 13:17:16 by mboivin           #+#    #+#             */
/*   Updated: 2020/06/15 14:39:23 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Array of structures: pointers to conversion functions matching types
*/

struct s_conv	g_conv[] =
{
	{'c', &conv_c},
	{'s', &conv_s},
	{'p', &conv_p},
	{'d', &conv_int},
	{'i', &conv_int},
	{'o', &conv_o},
	{'u', &conv_uint},
	{'x', &conv_hex},
	{'X', &conv_hex},
	{'%', &conv_percent}
};
