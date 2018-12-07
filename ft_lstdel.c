/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sirafe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 17:38:27 by sirafe            #+#    #+#             */
/*   Updated: 2018/12/07 17:54:27 by sirafe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*new;

	if (!alst || !del)
		return ;
	while (*alst != 0)
	{
		new = (*alst)->next;
		del((*alst)->content, (*alst)->content_size);
		free((void *)(*alst));
		*alst = new;
	}
	*alst = NULL;
}
