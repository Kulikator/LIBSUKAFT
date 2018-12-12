/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcasecmp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sirafe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 18:25:31 by sirafe            #+#    #+#             */
/*   Updated: 2018/12/12 17:52:03 by sirafe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcasecmp(const char *str1, const char *str2)
{
	size_t i;

	i = 0;
	while (ft_toupper((int)str1[i]) == ft_toupper((int)str2[i])
		&& str1[i] != '\0')
	{
		i++;
	}
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
