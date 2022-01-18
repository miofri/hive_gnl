/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skesuma <skesuma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 10:39:27 by skesuma           #+#    #+#             */
/*   Updated: 2021/12/15 15:08:09 by skesuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	char	arr[12];
	int		i;

	i = 0;
	if (n == -2147483648)
	{
		n = n / 10;
		arr[i++] = '8';
	}
	if (n == 0)
		ft_putchar('0');
	else if (n < 0)
	{
		n = -n;
		ft_putchar('-');
	}
	while (n != 0)
	{
		arr[i++] = ((n % 10) + '0');
		n = n / 10;
	}
	arr[i] = '\0';
	i = ft_strlen(arr);
	while (i > 0)
		ft_putchar(arr[--i]);
}

/*
** L21 checks for min int. shave 1 number off, and put it in an array.
** L33 puts number in an array
*/
