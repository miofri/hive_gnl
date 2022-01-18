/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skesuma <skesuma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:40:56 by skesuma           #+#    #+#             */
/*   Updated: 2021/12/15 15:13:18 by skesuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	if (s && f)
	{
		while (*s != '\0')
		{
			(f)(s);
			s++;
		}
	}
}

/* first make sure that s and f both exist.
** f contains the address of the function and s is a pointer which points a
** string array. we dont use the dereference operator here because we want to
** apply the function to a char pointer, which points to an array.
** f -> ptr -> [x]
*/
