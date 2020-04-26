/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/11 13:19:02 by mboivin           #+#    #+#             */
/*   Updated: 2020/04/26 22:21:23 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function: Handles wide characters using the specified length
**
** arg: The argument to convert
**
** returns: A string representation of the wide character
*/

char		*length_wchar(wchar_t *arg)
{
	char	*result;
	char	*tmp;

	result = ft_strnew(1);
	if (result == NULL)
		return (NULL);
	while (*arg)
	{
		tmp = (ft_atos(*arg));
		result = ft_strjoindel(result, tmp);
		arg++;
	}
	return (result);
}

/*
** Function: Handles type s
**
** spec: A structure containing the retrieved formatting data
** ap: A pointer to the list of arguments
**
** returns: The count of printed characters
*/

int			conv_s(t_spec *spec, va_list ap)
{
	int		printed;
	char	*arg;
	char	*buffer;

	arg = va_arg(ap, char *);
	if (arg == NULL)
		buffer = ft_strdup("(null)");
	else if (spec->modifier == 'l')
		buffer = length_wchar((wchar_t *)arg);
	else
		buffer = ft_strdup(arg);
	if (spec->prec >= 0 && spec->prec < (int)ft_strlen(buffer))
		buffer = ft_strrep(buffer, spec->prec);
	if (buffer == NULL)
		return (-1);
	printed = format_str(buffer, spec);
	free(buffer);
	return (printed);
}
