/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sirafe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 15:49:03 by sirafe            #+#    #+#             */
/*   Updated: 2018/11/28 15:50:48 by sirafe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	char	*ptr;

	ptr = (char *)NULL;
	while (*str)
	{
		if (*str == (char)ch)
			ptr = (char *)str;
		str++;
	}
	return (ptr);
}
