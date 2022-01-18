/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skesuma <skesuma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:48:52 by skesuma           #+#    #+#             */
/*   Updated: 2021/12/15 15:44:01 by skesuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_length(int n)
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

static char	*reverse_array(char *ptr)
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
	i = 0;
	while (rpt[i])
	{
		if (i == 0 && rpt[i] == '-')
			i++;
		else if (ft_isdigit(rpt[i]))
			i++;
		else
			rpt[i] = '\0';
	}
	return (rpt);
}

static char	*z_ero(int n)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char *)malloc(2);
	if (!ptr)
		return (NULL);
	ptr[i++] = '0' + n;
	ptr[i] = '\0';
	return (ptr);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = (char *)ft_memalloc(sizeof(char) * (num_length(n) + 2));
	if (!ptr)
		return (NULL);
	if (n == 0)
		return (ptr = z_ero(n));
	if (n < 0)
	{
		ptr[num_length(n)] = '-';
		ptr[i++] = '0' + (n % 10 * -1);
		n = (n / 10) * -1;
	}
	while (n > 0)
	{
		ptr[i++] = '0' + (n % 10);
		n = n / 10;
	}
	if (ptr[i] == '-')
		i++;
	ptr[i] = '\0';
	return (reverse_array(ptr));
}

/*
** Function ft_itoa
** L82 Handles negative number. The number is shaved by 1 here in order
**	to handle max_int. if the number was -2147483648, the function would
**	not be able to handle it.
**	If num is -22, ptr[0] is
**		'0' + (-22 % 10 * -1) which is 2.
**
** Function z_ero
**	Used to handle the number zero. Without it, my while loop has no
**	way to break. basically creates an array with 2 space for '0' and
**	'0'.
**
** Function	num_length
**	counting the number of character is needed for my array.
**
** Function reverse_array
**	reversing the array created in ft_itoa. on L38 item 0 in ptr is item
**	len in rpt. The while loop on L41 is necessary in case of inputs like
**	123X.
*/
