/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skesuma <skesuma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:21:03 by skesuma           #+#    #+#             */
/*   Updated: 2021/12/15 15:03:03 by skesuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*x;

	i = 0;
	x = (unsigned char *)s;
	while (i < n)
	{
		*(x + i) = 0;
		i++;
	}
}

/*
**	The bzero() function erases the data in the n bytes of the memory
**	starting at the location pointed to by s, by writing zeros (bytes
**	containing '\0') to that area.
*/
