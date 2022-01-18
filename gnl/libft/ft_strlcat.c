/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skesuma <skesuma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 14:03:22 by skesuma           #+#    #+#             */
/*   Updated: 2021/12/15 15:22:11 by skesuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int				len;
	int				i;
	unsigned int	slen;
	unsigned int	total_l;

	slen = ft_strlen(dst);
	len = dstsize - slen - 1;
	total_l = ft_strlen(dst);
	i = 0;
	while (i < len && src[i] != '\0')
	{
		dst[slen] = src[i];
		slen++;
		i++;
	}
	dst[slen] = '\0';
	total_l = total_l + ft_strlen((char *)src);
	if (dstsize < slen)
		total_l = dstsize + ft_strlen((char *)src);
	return (total_l);
}

/* total_l saves the initial length of dst for the final calculation of
** the initial length of dst + length of src.
**
** L29 copies src[i] to dst's end.
** L37 dstsize is the length of the buffer. if the given dstsize is smaller than
** the length of src itself e.g. dst has 15 items but dstsize is 5, and len(src)
** is 4, total_l would normally be 15+4 = 19, which is inaccurate as there is no
** space to actually put src in. with L37 it'd be 5 (length of buffer) + 4 = 9.
**
** FROM THE MAN:
** "if strlcat() traverses size characters without finding a NUL, the length of
** the string is considered to be size and the destination string will not be
** NUL-terminated (since there was no space for the NUL). This keeps strlcat()
** from running off the end of a string." */
