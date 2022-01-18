/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skesuma <skesuma@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 13:12:10 by skesuma           #+#    #+#             */
/*   Updated: 2021/12/16 16:08:09 by skesuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s1);
	while (i < n && s2[i] != '\0')
	{
		s1[len] = s2[i];
		len++;
		i++;
	}
	s1[len] = '\0';
	return (s1);
}

/*

** L24 appends the content of s2[i] into s1[len].
**
** DESCRIPTION
** The strcat() function appends the src string to the dest string,
** overwriting the terminating null byte ('\0') at the end of dest,
** and then adds a terminating null byte.  The strings may not
** overlap, and the dest string must have enough space for the
** result.  If dest is not large enough, program behavior is
** unpredictable; buffer overruns are a favorite avenue for
** attacking secure programs.
*/
