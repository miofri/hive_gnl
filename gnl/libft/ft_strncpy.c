/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skesuma <skesuma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:38:25 by skesuma           #+#    #+#             */
/*   Updated: 2021/12/15 15:20:27 by skesuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len && *(src + i) != '\0')
	{
		*(dst + i) = *(src + i);
		i++;
	}
	while (i < len)
	{
		*(dst + i) = '\0';
		i++;
	}
	return (dst);
}

/*
** L25 checks if length of src is less than n, if yes a null-termninator will
** be added.
**
** ---------
** The  strncpy()  function  is similar, except that at most n bytes of src are
** copied.  Warning: If there is no null byte among the first n bytes of src,
** the string placed in dest will not be null-terminated.
**
** If the length of src is less than n, strncpy() writes additional null bytes
** to dest to ensure that a total of  n  bytes are written.
*/
