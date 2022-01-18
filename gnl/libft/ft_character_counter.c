/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_character_counter.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skesuma <skesuma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 15:52:41 by skesuma           #+#    #+#             */
/*   Updated: 2021/12/15 15:56:42 by skesuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_character_counter(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c)
		i++;
	return (i);
}

/*counts the number of characters that is not c in a string.*/
