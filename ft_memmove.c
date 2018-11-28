/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sirafe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 15:20:19 by sirafe            #+#    #+#             */
/*   Updated: 2018/11/28 15:21:28 by sirafe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*ptr;

	ptr = (char *)malloc(sizeof(char) * n);
	if (ptr == NULL)
		return (NULL);
	ft_memcpy(ptr, src, n);
	ft_memcpy(dst, ptr, n);
	free(ptr);
	return (dst);
}
