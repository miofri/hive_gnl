/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skesuma <skesuma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:14:17 by skesuma           #+#    #+#             */
/*   Updated: 2021/12/15 15:08:52 by skesuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int	i;
	int	y;

	y = 0;
	i = ft_strlen(s1);
	while (s2[y] != '\0')
	{
		s1[i] = s2[y];
		i++;
		y++;
	}
	s1[i] = '\0';
	return (s1);
}

/*
** The  strcat() function appends the src string to the dest string,
** overwriting the terminating null byte ('\0') at the end of dest, and
** then adds a terminating null byte. The strings may not overlap, and
** the dest string must have enough space for the result. If dest
** is not large enough, program behavior is unpredictable.
** RETURN VALUE
** The strcat() and strncat() functions return a pointer to the resulting
** string dest.
*/
