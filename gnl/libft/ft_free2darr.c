/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft__free2darr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skesuma <skesuma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 15:28:21 by skesuma           #+#    #+#             */
/*   Updated: 2021/12/15 15:55:44 by skesuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_free2darr(char **ptr, int y)
{
	int	i;

	i = 0;
	while (i < y)
	{
		free(ptr[i++]);
	}
	free(ptr);
	ptr = NULL;
	return (ptr);
}

/* frees up 2d array, used in strsplit called "ft_free"*/
