/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sirafe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 15:27:07 by sirafe            #+#    #+#             */
/*   Updated: 2018/11/28 15:27:28 by sirafe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *str1, const char *str2)
{
	while (*str1 == *str2++)
		if (*str1++ == 0)
			return (0);
	return (*(unsigned char *)str1 - *(unsigned char *)--str2);
}
