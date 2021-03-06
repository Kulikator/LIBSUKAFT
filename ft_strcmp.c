/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sirafe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 15:27:07 by sirafe            #+#    #+#             */
/*   Updated: 2018/12/12 17:51:39 by sirafe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *str1, const char *str2)
{
	size_t i;

	i = 0;
	while (str1[i] == str2[i] && str1[i] != '\0')
	{
		i++;
	}
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
