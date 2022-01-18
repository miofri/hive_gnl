/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skesuma <skesuma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:00:32 by skesuma           #+#    #+#             */
/*   Updated: 2021/12/15 15:14:30 by skesuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*fresh;
	unsigned int	i;

	if (!s)
		return (NULL);
	i = 0;
	fresh = (char *)malloc(sizeof(char) * (len + 1));
	if (fresh != NULL && len <= ft_strlen(s) && start <= ft_strlen(s))
	{
		while (i < len)
			fresh[i++] = s[start++];
		fresh[i] = '\0';
		return (fresh);
	}
	return (NULL);
}

/*
** L24 checks that length of substring and index start < length of s.
** ---------
** Allocates (with malloc(3)) and returns a “fresh” substring
** from the string given as argument. The substring begins at
** indexstart and is of size len. If start and len aren’t refering
** to a valid substring, the behavior is undefined. If the
** allocation fails, the function returns NULL.
*/
