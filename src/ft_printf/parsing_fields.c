/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_fields.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/11 12:35:35 by mboivin           #+#    #+#             */
/*   Updated: 2020/04/26 22:10:43 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function: Retrieves the flags
**
** format: The formatting string
** spec: A structure containing the retrieved formatting data
*/

void			get_flags(const char **format, t_spec *spec)
{
	const char	*flags = "-0+ #";

	while (**format && ft_strchr(flags, **format))
	{
		if (**format == '-')
			spec->flag |= leftalign;
		else if (**format == '0')
			spec->flag |= zero;
		else if (**format == '+')
			spec->flag |= plus;
		else if (**format == ' ')
			spec->flag |= space;
		else if (**format == '#')
			spec->flag |= alt;
		else
			break ;
		(*format)++;
	}
}

/*
** Function: Retrieves the field width
**
** format: The formatting string
** spec: A structure containing the retrieved formatting data
** ap: A pointer to the list of arguments
*/

void			get_width(const char **format, t_spec *spec, va_list ap)
{
	if (**format == '*')
	{
		spec->width = get_arg(ap);
		(*format)++;
	}
	else if (ft_isdigit(**format))
	{
		spec->width = get_digits(*format);
		while (ft_isdigit(**format))
			(*format)++;
	}
	if (spec->width < 0)
	{
		spec->width = -spec->width;
		spec->flag |= leftalign;
	}
}

/*
** Function: Retrieves the precision
**
** format: The formatting string
** spec: A structure containing the retrieved formatting data
** ap: A pointer to the list of arguments
*/

void			get_precision(const char **format, t_spec *spec, va_list ap)
{
	if (**format == '.')
	{
		(*format)++;
		if (**format == '*')
		{
			spec->prec = get_arg(ap);
			(*format)++;
		}
		else if (ft_isdigit(**format))
		{
			spec->prec = get_digits(*format);
			while (ft_isdigit(**format))
				(*format)++;
		}
		else
			spec->prec = 0;
	}
}

/*
** Function: Retrieves the length modifiers
**
** format: The formatting string
** spec: A structure containing the retrieved formatting data
*/

void			get_length(const char **format, t_spec *spec)
{
	const char	*modifiers = "hl";

	if (**format && ft_strchr(modifiers, **format))
	{
		spec->modifier = **format;
		(*format)++;
		if (**format && ft_strchr(modifiers, **format))
		{
			spec->modifier += **format;
			(*format)++;
		}
	}
}

/*
** Function: Retrieves the type
**
** format: The formatting string
** c: The type character
** spec: A structure containing the retrieved formatting data
*/

void			get_type(const char **format, char c, t_spec *spec)
{
	const char	*types = "cspdiouxX%";

	if (**format && ft_strchr(types, c))
	{
		spec->type = c;
		(*format)++;
	}
}
