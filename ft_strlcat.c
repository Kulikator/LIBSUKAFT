/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sirafe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 15:31:12 by sirafe            #+#    #+#             */
/*   Updated: 2018/11/28 15:39:56 by sirafe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dstl;
	size_t	srcl;

	dstl = ft_strlen(dst);
	srcl = ft_strlen((char *)src);
	if (dstl >= size || size == 0)
		return (size + srcl);
	i = 0;
	while (dst[i] && i < size)
		i++;
	dstl = i;
	while (*src && i < size - 1)
		dst[i++] = *src++;
	dst[i] = '\0';
	return (dstl + srcl);
}
