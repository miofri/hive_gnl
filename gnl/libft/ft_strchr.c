/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skesuma <skesuma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:44:40 by skesuma           #+#    #+#             */
/*   Updated: 2021/12/15 15:08:46 by skesuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen((char *)s);
	ptr = (char *)s;
	while (*(ptr + i) != (char)c && i < len)
		i++;
	if (*(ptr + i) != (char)c)
	{
		ptr = NULL;
		return (ptr);
	}
	return ((ptr + i));
}

/*
** L26 if we have reached the end and still no c, returns ptr = NULL.
** L31 otherwise return ptr + i (where c is).
** -----------
** The strchr() function returns a pointer to the first occurrence of the
** character c in the string s.
** RETURN VALUE
** The strchr() and strrchr() functions return a pointer to the matched character
** or NULL if the character is not found.  The terminating
** null byte is considered part of the string, so that if c is specified as '\0',
** these functions return a pointer to the terminator.
*/
