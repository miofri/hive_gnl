/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skesuma <skesuma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:30:00 by skesuma           #+#    #+#             */
/*   Updated: 2021/12/15 15:16:09 by skesuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	size_t	i;
	int		track;

	i = 0;
	track = -1;
	ptr = (char *)s;
	while (i <= ft_strlen((char *)s))
	{
		if (s[i] == (char)c)
			track = i;
		i++;
	}
	if (track == -1)
	{
		ptr = NULL;
		return (ptr);
	}
	ptr = &ptr[track];
	return (ptr);
}

/*
** L24 comparison includes null terminator.
** L27 we keep updating track whenever we find c.
** L30 if track stays as -1, it means c was not found and we return null.
**
** The strrchr() function returns a pointer to the last occurrence of the
** character c in the string s.
*/
