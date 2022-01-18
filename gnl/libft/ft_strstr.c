/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skesuma <skesuma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 11:37:12 by skesuma           #+#    #+#             */
/*   Updated: 2021/12/15 15:16:00 by skesuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*ptr;
	int		i;
	int		y;

	i = 0;
	ptr = (char *)haystack;
	y = 0;
	if (needle[0] == '\0' || needle == 0)
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		while ((haystack[i] == needle[y]) && (needle[y] != '\0'))
		{
			y++;
			i++;
			if (needle[y] == '\0')
			{
				ptr = (char *)&haystack[i - y];
				return (ptr);
			}
		}
		i = i - y + 1;
		y = 0;
	}
	return (0);
}

/*
** L29 if a matching character is found, we starts comparing them.
** the while loop stops when a non-matching chat is not found
** 	or we reach the end of needle.
** L35 when all character matches, we assign the address of the beginning of the
** 	needle to ptr.
** L39 when a matching character is not found, we reset y so we can
** 	compare it again from the start.
**
** DESCRIPTION
** The  strstr() function finds the first occurrence of the
** substring needle in the string haystack.  The terminating null
** bytes ('\0') are not compared.
**
** RETURN VALUE
** These functions return a pointer to the beginning of the located
** substring, or NULL if the substring is not found.
*/
