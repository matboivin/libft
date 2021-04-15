/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_fields.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/11 12:35:35 by mboivin           #+#    #+#             */
/*   Updated: 2021/04/15 18:50:23 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_printf.h"

/*
** Function: Retrieves the flags
**
** format: The formatting string
** spec: A structure containing the retrieved formatting data
*/

void	get_flags(const char **format, t_spec *spec)
{
	while (**format && ft_strchr(FLAG_TYPES, **format))
	{
		if (**format == '-')
			spec->flag |= LEFTALIGN;
		else if (**format == ZERO)
			spec->flag |= ZERO_PAD;
		else if (**format == '+')
			spec->flag |= PLUS_PREF;
		else if (**format == SPACE)
			spec->flag |= SPACE_PREF;
		else if (**format == HASH)
			spec->flag |= ALT_FORM;
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

void	get_width(const char **format, t_spec *spec, va_list ap)
{
	if (**format == ASTERISK)
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
		spec->flag |= LEFTALIGN;
	}
}

/*
** Function: Retrieves the precision
**
** format: The formatting string
** spec: A structure containing the retrieved formatting data
** ap: A pointer to the list of arguments
*/

void	get_precision(const char **format, t_spec *spec, va_list ap)
{
	if (**format == DOT)
	{
		(*format)++;
		if (**format == ASTERISK)
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

void	get_length(const char **format, t_spec *spec)
{
	if (**format && ft_strchr(MODIFIER_TYPES, **format))
	{
		spec->modifier = **format;
		(*format)++;
		if (**format && ft_strchr(MODIFIER_TYPES, **format))
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

void	get_type(const char **format, char c, t_spec *spec)
{
	if (**format && ft_strchr(CONV_TYPES, c))
	{
		spec->type = c;
		(*format)++;
	}
}
