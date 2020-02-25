/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:23:32 by mboivin           #+#    #+#             */
/*   Updated: 2019/12/03 20:01:22 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Recoded strdup libc function: Allocates sufficient memory for a copy of the
** string s1, does the copy, and returns a pointer to it
**
** s1: The string to be copied
**
** returns: A pointer to the copy
**          NULL otherwise
*/

char		*ft_strdup(char const *s1)
{
	size_t	len;
	char	*s;

	len = ft_strlen(s1);
	if (!(s = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	s = ft_strncpy(s, s1, (len + 1));
	return (s);
}
