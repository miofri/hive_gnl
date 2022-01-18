/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skesuma <skesuma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 13:53:06 by skesuma           #+#    #+#             */
/*   Updated: 2021/12/15 15:12:55 by skesuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(s1);
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (ptr == 0)
		return (0);
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/*
** The strdup() function returns a pointer to a new string which is a
** duplicate of the string s. Memory for the new
** string is obtained with malloc(3), and can be freed with free(3).
** RETURN VALUE
** On success, the strdup() function returns a pointer to the duplicated string.
** It returns NULL if  insufficient  memory was available, with errno set to
** indicate the cause of the error.
*/
