/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sirafe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 15:22:36 by sirafe            #+#    #+#             */
/*   Updated: 2018/11/28 15:23:12 by sirafe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dst, const char *app)
{
	char	*ptr;

	ptr = dst;
	while (*ptr)
		ptr++;
	while (*app)
		*ptr++ = *app++;
	*ptr = 0;
	return (dst);
}
