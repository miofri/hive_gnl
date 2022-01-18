/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_array.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skesuma <skesuma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 15:38:38 by skesuma           #+#    #+#             */
/*   Updated: 2021/12/15 15:56:56 by skesuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_reverse_array(char *ptr)
{
	char	*rpt;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(ptr);
	rpt = (char *)malloc(sizeof(char) * (len + 1));
	if (!rpt)
		return (NULL);
	rpt[len--] = '\0';
	while (len >= 0)
		rpt[len--] = ptr[i++];
	return (rpt);
}

/*reverses an array, used in itoa.*/
