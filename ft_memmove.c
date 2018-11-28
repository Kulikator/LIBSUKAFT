/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sirafe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 15:20:19 by sirafe            #+#    #+#             */
/*   Updated: 2018/11/28 18:58:48 by sirafe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char*s;
	unsigned char*d;

	if (src == dst)
		return (dst);
	if (src > dst)
		return (ft_memcpy(dst, src, len));
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (len != 0)
	{
		*(d + len - 1) = *(s + len - 1);
		len--;
	}
	return (dst);
}
