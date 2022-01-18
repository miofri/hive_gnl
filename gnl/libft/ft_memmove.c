/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skesuma <skesuma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 11:29:12 by skesuma           #+#    #+#             */
/*   Updated: 2021/12/15 15:07:34 by skesuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	if (dst > src)
	{
		while (len-- > 0)
			((char *)dst)[len] = ((const char *)src)[len];
	}
	else
	{
		while (i < len)
		{
			((char *)dst)[i] = ((const char *)src)[i];
			i++;
		}
	}
	return (dst);
}

/*
** DESCRIPTION
** The  memmove() function copies n bytes from memory area src to memory
** area dest.
** The memory areas may overlap: copying takes place as
** though the bytes in src are first copied into a temporary array that does not
** overlap src or dest, and the bytes are then copied  from
** the temporary array to dest.
** RETURN VALUE
** The memmove() function returns a pointer to dest.
*/
