/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skesuma <skesuma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:31:10 by skesuma           #+#    #+#             */
/*   Updated: 2021/12/15 15:06:39 by skesuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ss1;
	unsigned char	*ss2;

	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (*(ss1 + i) == *(ss2 + i))
			i++;
		else if (*(ss1 + i) != *(ss2 + i))
			return (*(ss1 + i) - *(ss2 + i));
	}
	return (0);
}

/*
** The memcmp() function compares the first n bytes (each interpreted as unsigned
** char) of the memory areas s1 and s2.
**
** RETURN VALUE
** The  memcmp() function returns an integer less than, equal to, or greater
** than zero if the first n bytes of s1 is found, respectively, to be less than,
** to match, or be greater than the first n bytes of s2.
**
** For a nonzero return value, the sign is determined by the sign of the
** difference
** between the first pair of bytes (interpreted  as  unsigned char) that differ
** in s1 and s2. If n is zero, the return value is zero.
*/
