/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skesuma <skesuma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 15:39:28 by skesuma           #+#    #+#             */
/*   Updated: 2021/12/15 15:05:49 by skesuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*copy_s;
	unsigned int	i;

	i = 0;
	copy_s = (unsigned char *) s;
	while (i < n)
	{
		if (*(copy_s + i) == (unsigned char)c)
			return (copy_s + i);
		i++;
	}
	return (0);
}

/*
** The  memchr() function scans the initial n bytes of the memory area
** pointed to by s for the first instance of c.  Both c and the bytes of
** the memory area pointed to by s are interpreted as unsigned char.
** RETURN VALUE
** The memchr() and memrchr() functions return a pointer to the matching byte or
** NULL if the character does not occur in the given memory area.
*/
