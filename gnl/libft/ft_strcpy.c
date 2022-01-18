/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skesuma <skesuma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:07:29 by skesuma           #+#    #+#             */
/*   Updated: 2021/12/15 15:12:31 by skesuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

/*
** The strcpy() function copies the string pointed to by src, including
** the terminating null byte ('\0'), to the buffer
** pointed to by dest. The strings may not overlap, and the destination
** string dest must be large enough to receive the
** copy. Beware of buffer overruns!
** RETURN VALUE
** The strcpy() and strncpy() functions return a pointer to the destination
** string dest.
*/
