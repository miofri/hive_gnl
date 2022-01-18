/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skesuma <skesuma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:10:23 by skesuma           #+#    #+#             */
/*   Updated: 2021/12/15 15:06:55 by skesuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*cdst;
	const unsigned char	*csrc;
	size_t				i;

	if (!dst && !src)
		return (NULL);
	cdst = (unsigned char *)dst;
	csrc = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		*(cdst + i) = *(csrc + i);
		i++;
	}
	return (cdst);
}

/*
** The  memcpy() function copies n bytes from memory area src to memory area
** dest.
** The memory areas must not overlap.  Use memmove(3) if the memory areas do
** overlap.
**
** RETURN VALUE
** The memcpy() function returns a pointer to dest.
*/
