/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/11 12:33:13 by mboivin           #+#    #+#             */
/*   Updated: 2020/06/15 14:39:23 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function: Finds the conv function matching type
**
** spec: A structure containing the retrieved formatting data
** ap: A pointer to the list of arguments
**
** returns: A pointer to the required conv function
*/

int			output(t_spec *spec, va_list ap)
{
	int		i;

	i = 0;
	while (g_conv[i].type != spec->type)
		i++;
	return ((*g_conv[i].func)(spec, ap));
}

/*
** Function: Parses the formatting string and fill the spec data structure
**
** format: The formatting string
** ap: A pointer to the list of arguments
**
** returns: The count of printed characters
*/

int			parse_formatting(int fd, const char **format, va_list ap)
{
	t_spec	spec;

	create_spec(fd, &spec);
	get_flags(format, &spec);
	get_width(format, &spec, ap);
	get_precision(format, &spec, ap);
	get_length(format, &spec);
	get_type(format, **format, &spec);
	if (spec.type != '\0')
		return (output(&spec, ap));
	return (0);
}

/*
** Function: Constructs the output by stopping at each percent character
** or prints directly to screen
**
** format: The formatting string
** ap: A pointer to the first optional argument in the list of arguments
**
** returns: The count of printed characters
*/

int			construct_output(int fd, const char *format, va_list ap)
{
	int		printed;

	if (!format)
		return (0);
	printed = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			printed += parse_formatting(fd, &format, ap);
		}
		else
		{
			printed += write(fd, format, 1);
			format++;
		}
	}
	return (printed);
}
