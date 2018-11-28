/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sirafe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 15:13:22 by sirafe            #+#    #+#             */
/*   Updated: 2018/11/28 15:18:15 by sirafe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_memcmp(const void *a1, const void *a2, size_t n)
{
	const unsigned char		*ptr;
	const unsigned char		*ptr1;
	size_t						i;

	ptr = a1;
	ptr1 = a2;
	i = 0;
	while (ptr[i] != '\0' && ptr1[i] != '\0' && i < n)
	{
		if (ptr[i] != ptr1[i])
			return (ptr[i] - ptr1[i]);
		i++;
	}
	if ((ptr[i] == '\0' && ptr1[i] != '\0') || (ptr[i] == '\0' &&
												ptr1[i] != '\0'))
		return (ptr[i] - ptr1[i]);
	return (0);
}
