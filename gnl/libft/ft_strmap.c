/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skesuma <skesuma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:57:40 by skesuma           #+#    #+#             */
/*   Updated: 2021/12/15 15:20:58 by skesuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char			*fresh;
	unsigned int	i;
	unsigned int	len;

	if (!s || !f)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	fresh = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (fresh != NULL)
	{
		fresh[ft_strlen(s)] = '\0';
		while (i < len)
			*(fresh + i++) = f(*(s++));
		return (fresh);
	}
	else
		return (NULL);
}

/*
** L29 populates the new array with the result of applying a function to *s.
** ----------
** Applies the function f to each character of the string given
** as argument to create a “fresh” new string (with malloc(3))
** resulting from the successive applications of f.
*/
