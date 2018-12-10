/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sirafe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 15:29:15 by sirafe            #+#    #+#             */
/*   Updated: 2018/12/10 18:21:06 by sirafe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*res;
	t_list	*resend;

	if ((!lst) || (!f))
		return (0);
	res = f(lst);
	resend = res;
	if (res == NULL)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
		resend->next = f(lst);
		if (resend->next == NULL)
			return (NULL);
		resend = resend->next;
	}
	return (res);
}
