/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skesuma <skesuma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 13:00:41 by skesuma           #+#    #+#             */
/*   Updated: 2021/12/15 15:08:05 by skesuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
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
		ft_putchar_fd('0', fd);
	else if (n < 0)
	{
		n = -n;
		ft_putchar_fd('-', fd);
	}
	while (n != 0)
	{
		arr[i++] = ((n % 10) + '0');
		n = n / 10;
	}
	arr[i] = '\0';
	i = ft_strlen(arr);
	while (i > 0)
		ft_putchar_fd(arr[--i], fd);
}
