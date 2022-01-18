/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skesuma <skesuma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:04:45 by skesuma           #+#    #+#             */
/*   Updated: 2021/12/20 16:57:08 by skesuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		y;

	i = 0;
	y = 0;
	if (needle[i] == 0 || needle == 0)
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		while (haystack[i] == needle[y] && needle[y] != '\0' && i < len)
		{
			i++;
			y++;
			if (needle[y] == '\0')
			{
				haystack = &haystack[(i - y)];
				return ((char *)haystack);
			}
		}
		i = i - y + 1;
		y = 0;
	}
	return (0);
}

/*
** same as strstr but we only compare until len.
*/
