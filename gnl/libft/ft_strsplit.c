/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skesuma <skesuma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 19:53:41 by skesuma           #+#    #+#             */
/*   Updated: 2021/12/17 14:53:49 by skesuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	w_len(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

static int	w_count(char *s, char c)
{
	int	i;
	int	w;

	i = 0;
	w = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			w++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		if (s[i] != '\0')
			i++;
	}
	return (w);
}

static char	**ft_free(char **ptr, int y)
{
	int	i;

	i = 0;
	while (i < y)
	{
		free(ptr[i++]);
	}
	free(ptr);
	ptr = NULL;
	return (ptr);
}

static char	**ft_split(int y, char **ptr, char *s, char c)
{
	int	x;

	x = 0;
	while (*s != '\0' && ptr != NULL)
	{
		if (*s != c)
		{
			ptr[y] = (char *)malloc(sizeof(char) * (w_len((char *)s, c) + 1));
			if (!ptr[y])
				return (ft_free(ptr, y));
			while (*s != c && *s != '\0')
				ptr[y][x++] = *(s++);
			ptr[y++][x] = '\0';
			x = 0;
		}
		if (*s != '\0')
			s++;
	}
	if (ptr)
		ptr[y] = 0;
	return (ptr);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**ptr;
	int		y;

	if (!s || !c)
		return (NULL);
	y = 0;
	ptr = (char **)malloc(sizeof(ptr) * (w_count((char *)s, c) + 1));
	if (!ptr)
		return (NULL);
	ptr = ft_split(y, ptr, (char *)s, c);
	return (ptr);
}

/*
** w_len: counts the length of the word for **ptr mallocing.
**
** w_count: counts the number of words seperated by delimiter.
**	L34 everytime we find a char that is not c, we add it to w(ord)
**		and skips the rest until we find a not-c again.
**		w will return the number of words in the array, which is how large
**		the array needs to be.
**
** ft_strsplit:
** L80 prevent pointer from moving too far, also necessary to move s forward.
** L84 we used 0 instead of \0 because ptr[y] expects a string. In C, there is
** no
** difference in type: both are int.
**
** Allocates (with malloc(3)) and returns an array of “fresh”
** strings (all ending with ’\0’, including the array itself)
** obtained by spliting s using the character c as a delimiter.
** If the allocation fails the function returns NULL. Example:
** ft_strsplit("*hello*fellow***students*", ’*’) returns the
** array ["hello", "fellow", "students"].
*/
