/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skesuma <skesuma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 11:18:12 by skesuma           #+#    #+#             */
/*   Updated: 2021/12/15 15:13:34 by skesuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	int		i;
	int		x;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	x = 0;
	ptr = (char *)malloc(sizeof(ptr) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (ptr != NULL)
	{
		while (s1[i])
		{
			ptr[i] = s1[i];
			i++;
		}
		while (s2[x])
			ptr[i++] = s2[x++];
		ptr[i] = '\0';
		return (ptr);
	}
	return (NULL);
}

/*
** L23 malloc the size of s1 + s2.
** L26 copies the content of s1 to ptr.
** L31 copies the content of s2 to ptr.
** Allocates (with malloc(3)) and returns a “fresh” string ending with ’\0’,
** result of the concatenation of s1 and s2. If the allocation fails the
** function returns NULL.
*/
