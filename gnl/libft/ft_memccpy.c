/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skesuma <skesuma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:30:41 by skesuma           #+#    #+#             */
/*   Updated: 2021/12/15 15:05:20 by skesuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*cdst;
	unsigned char		*csrc;
	size_t				i;

	cdst = (unsigned char *)dst;
	csrc = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		*(cdst + i) = *(csrc + i);
		if (*(csrc + i) == (unsigned char)c)
			return ((void *)(cdst + i + 1));
		i++;
	}
	return (0);
}

/*
** The  memccpy() function copies no more than n bytes from memory area src to
** memory area dest, stopping when the character c is found.
** RETURN VALUE
** The memccpy() function returns a pointer to the next character in dest
** after c,or NULL if c was not found in the first n characters of src.
*/
