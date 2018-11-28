/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sirafe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 15:11:16 by sirafe            #+#    #+#             */
/*   Updated: 2018/11/28 15:12:17 by sirafe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
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
		if (p2[i] == c)
			return ((char *)dst + i + 1);
		i++;
	}
	return (NULL);
}
