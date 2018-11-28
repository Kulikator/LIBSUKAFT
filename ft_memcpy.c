/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sirafe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 15:18:38 by sirafe            #+#    #+#             */
/*   Updated: 2018/11/28 15:20:02 by sirafe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*p;
	char	*p2;

	p = dst;
	p2 = (char *)src;
	i = 0;
	while (i < n)
	{
		p[i] = p2[i];
		i++;
	}
	return (dst);
}
