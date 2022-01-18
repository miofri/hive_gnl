/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skesuma <skesuma@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 14:33:12 by skesuma           #+#    #+#             */
/*   Updated: 2022/01/03 14:54:55 by skesuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*a;
	t_list	*b;

	if (!del || !*alst || !alst)
		return ;
	a = *alst;
	while (a)
	{
		b = (a)->next;
		del((a)->content, (a)-> content_size);
		free(a);
		a = b;
	}
	*alst = NULL;
}

/*
**Takes as a parameter the adress of a pointer to a link and
**frees the memory of this link and every successors of that link
**using the functions del and free(3). Finally the pointer to
**the link that was just freed must be set to NULL (quite similar
**to the function ft_memdel from the mandatory part).*/
