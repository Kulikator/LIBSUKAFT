/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sirafe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 15:46:08 by sirafe            #+#    #+#             */
/*   Updated: 2018/12/11 15:47:03 by sirafe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *str, size_t n)
{
	char	*ptr;
	int		i;

	ptr = (char *)malloc(sizeof(char) * (n + 1));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (n > 0)
	{
		ptr[i] = str[i];
		i++;
		n--;
	}
	ptr[i] = 0;
	return (ptr);
}
