/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 23:20:53 by mboivin           #+#    #+#             */
/*   Updated: 2020/07/19 19:21:10 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function: Outputs the padding to the standard output
**
** pad: The pad character (either space or 0)
** len: The size of the output string
** spec: A structure containing the retrieved formatting data
**
** returns: The count of printed characters
*/

int				put_padding(int pad, int len, t_spec *spec)
{
	int			printed;

	printed = 0;
	while (spec->width-- > len)
		printed += write(spec->dst_fd, &pad, 1);
	return (printed);
}

/*
** Function: Outputs zeroes to the standard output
**
** len: The size of the output string
** spec: A structure containing the retrieved formatting data
**
** returns: The count of printed characters
*/

int				put_zeroes(int len, t_spec *spec)
{
	int			printed;
	int			zeroes;

	printed = 0;
	zeroes = spec->prec - len;
	while (zeroes--)
		printed += write(spec->dst_fd, "0", 1);
	return (printed);
}

/*
** Function: Checks if c is a prefix
**
** c: A character
**
** returns: A non-zero integer if c is a prefix
**          Zero value otherwise
*/

bool			is_prefix(int c)
{
	return (c == ' ' || c == '+' || c == '-');
}

/*
** Function: Allocates a new string, adding the required prefix to s
**
** s: A pointer to the string to be prefixed
** spec: A structure containing the retrieved formatting data
**
** returns: The new string
**          NULL otherwise
*/

char			*add_prefix(char *s, t_spec *spec)
{
	const char	*oct_prefix = "0";
	const char	*lowhex_prefix = "0x";
	const char	*uphex_prefix = "0X";
	char		*result;

	result = NULL;
	if (spec->type == 'p' || spec->type == 'x')
		result = ft_strprepend(lowhex_prefix, s);
	else if (spec->type == 'X')
		result = ft_strprepend(uphex_prefix, s);
	else if (spec->type == 'o')
		result = ft_strprepend(oct_prefix, s);
	else if (spec->type == 'd' || spec->type == 'i')
	{
		if (spec->flag & PLUS)
			result = ft_strprepend("+", s);
		else if (spec->flag & SPACE)
			result = ft_strprepend(" ", s);
	}
	return (result);
}
