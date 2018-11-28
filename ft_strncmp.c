/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sirafe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 15:43:04 by sirafe            #+#    #+#             */
/*   Updated: 2018/11/28 15:46:46 by sirafe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	while (n != 0)
	{
		if (*str1 != *str2)
			return (*(unsigned char*)(str1 - 1) - *(unsigned char*)(str2 - 1));
		n--;
		str1++;
		str2++;
	}
	return (0);
}
