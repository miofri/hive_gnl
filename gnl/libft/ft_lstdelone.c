/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skesuma <skesuma@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 14:57:52 by skesuma           #+#    #+#             */
/*   Updated: 2022/01/03 14:15:42 by skesuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (*alst)
	{
		del((*alst)->content, (*alst)->content_size);
		free(*alst);
		*alst = NULL;
	}
}

/*Takes as a parameter a link’s pointer address and frees the
**memory of the link’s content using the function del given as
**a parameter, then frees the link’s memory using free(3). The
**memory of next must not be freed under any circumstance.
**Finally, the pointer to the link that was just freed must be
**set to NULL (quite similar to the function ft_memdel in the
**mandatory part).*/
