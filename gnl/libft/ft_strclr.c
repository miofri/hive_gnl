/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skesuma <skesuma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:14:18 by skesuma           #+#    #+#             */
/*   Updated: 2021/12/15 15:12:21 by skesuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	int	i;

	i = 0;
	if (!s)
		s = NULL;
	else
	{
		while (s[i])
		{
			*(s + i) = '\0';
			i++;
		}
	}
}

/*
** Sets every character of the string to the value ’\0’.
*/
