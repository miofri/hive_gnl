/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skesuma <skesuma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:31:09 by skesuma           #+#    #+#             */
/*   Updated: 2021/12/15 15:07:43 by skesuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*a;
	size_t			i;

	i = 0;
	a = (unsigned char *)b;
	while (i < len)
	{
		*(a + i) = (unsigned char)c;
		i++;
	}
	return (a);
}

/*
-----------
** DESCRIPTION
** The memset() function fills the first len bytes of the memory area pointed
** to by b with the constant byte c.
**
** RETURN VALUE
** The memset() function returns a pointer to the memory area s.
*/
