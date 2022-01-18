/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_length.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skesuma <skesuma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 15:42:36 by skesuma           #+#    #+#             */
/*   Updated: 2021/12/15 15:56:51 by skesuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_num_length(int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

/* find out how long a number is. for example 123 is 3-char long.
** used in itoa under "num_length"*/
