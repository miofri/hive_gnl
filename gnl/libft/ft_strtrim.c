/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skesuma <skesuma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 11:57:46 by skesuma           #+#    #+#             */
/*   Updated: 2021/12/17 13:36:19 by skesuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_front(char const *s, int i)
{
	while ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n') && s[i] != '\0')
		i++;
	return (i);
}

static int	get_back(char const *s, int back)
{
	while ((s[back] == ' ' || s[back] == '\t' || s[back] == '\n') && back > 0)
		back--;
	return (back);
}

static char	*empty_string(char *ptr)
{
	ptr = (char *)malloc(sizeof(char) * 1);
	ptr[0] = '\0';
	return (ptr);
}

char	*ft_strtrim(char const *s)
{
	char	*ptr;
	int		i;
	int		back;
	int		ptrc;

	if (!s)
		return (NULL);
	i = 0;
	ptr = 0;
	ptrc = 0;
	back = ft_strlen(s) - 1;
	i = get_front(s, i);
	back = get_back(s, back);
	if (i > back)
		return (empty_string(ptr));
	ptr = (char *)malloc(sizeof(char) * (back - i + 2));
	if (!ptr)
		return (NULL);
	while (i < (back + 1))
		ptr[ptrc++] = s[i++];
	ptr[ptrc] = '\0';
	return (ptr);
}

/*
** ptrc = iterator for ptr.
** back = iterator starting from the char behind the null terminator.
** ptr = fresh string without whitespaces.

** L28 checking for whitespace character from the front.
** L30 checking for whitespace characters from the back.
** L32 we start copying characters from s and null terminate it.

** Allocates (with malloc(3)) and returns a copy of the string given as argument
** without whitespaces at the beginning or at the end of the string. Will be
** considered as whitespaces the following characters ’ ’, ’\n’ and ’\t’.
** If s has no whitespaces at the beginning or at the end, the function returns
** a copy of s. If the allocation fails the function returns NULL.
** Param. #1 The string to be trimed.
** Return value The “fresh” trimmed string or a copy of s.
** Libc functions malloc(3) */
