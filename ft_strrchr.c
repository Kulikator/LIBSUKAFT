/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sirafe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 15:49:03 by sirafe            #+#    #+#             */
/*   Updated: 2018/11/28 19:55:32 by sirafe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	char	*ptr;

	ptr = 0;
	while (*str)
	{
		if (*str == (char)ch)
			ptr = (char *)str;
		str++;
	}
	if (ch == 0)
		return ((char *)str);
	else
		return (ptr);
}
