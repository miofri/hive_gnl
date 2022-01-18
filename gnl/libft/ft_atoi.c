/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skesuma <skesuma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:31:29 by skesuma           #+#    #+#             */
/*   Updated: 2021/12/15 15:03:06 by skesuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	value;
	int	neg;

	neg = 1;
	value = 0;
	i = 0;
	while ((str[i] == ' ' || (str[i] < 14 && str[i] > 8)) && str[i] != '\0'
		&& str[i] != '-')
		i++;
	if (str[i] == '-')
	{
		neg = neg * -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (ft_isdigit(str[i]) && str[i] != '\0')
	{
		value = (10 * value) + (str[i] - '0');
		i++;
	}
	value *= neg;
	return (value);
}

/*
** 24 - detects space OR all other char e.g. /t /n etc, and str[i] cant be \0
** or neg sign. as long as it is, move forward (i++).
** 27 - saving whether the number is negative or not. if yes, * -1. i++.
** 32 - does the same thing as above, ignores plus sign. i++.
** 34 - then go through the string as long as it is a digit and not \0.
** 36 - value is the final result. every time we iterate we * 10. for the 1st
** number, value is 0 so it is negligible. then we add that to
** (str[i] - '0') which will give the 	decimal value of str[i].
** 39 - lastly, *neg which stored whether the str was neg.
*/
