/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sirafe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 15:41:32 by sirafe            #+#    #+#             */
/*   Updated: 2018/11/28 15:42:41 by sirafe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dst, const char *app, size_t n)
{
	char	*ptr;
	size_t		i;

	ptr = dst;
	i = 0;
	while (*ptr)
		ptr++;
	while (*app && i < n)
	{
		*ptr++ = *app++;
		i++;
	}
	*ptr = 0;
	return (dst);
}
