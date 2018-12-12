/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncasecmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sirafe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 17:17:16 by sirafe            #+#    #+#             */
/*   Updated: 2018/12/12 17:42:01 by sirafe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncasecmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (ft_toupper((int)str1[i]) == ft_toupper((int)str2[i])
		&& str1[i] != '\0' && n >= i)
	{
		i++;
		n--;
	}
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
