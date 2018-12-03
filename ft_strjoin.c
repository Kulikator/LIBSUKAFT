/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sirafe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 15:34:51 by sirafe            #+#    #+#             */
/*   Updated: 2018/12/03 16:28:05 by sirafe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	int		len;

	if (!s1 || !s2)
		return (NULL);
	len = (ft_strlen((char *)s1) + ft_strlen((char *)s2));
	ptr = (char *)malloc(len + 1);
	if (ptr == NULL)
		return (NULL);
	ft_strcpy(ptr, s1);
	len = ft_strlen(ptr);
	ft_strcpy(ptr + len, s2);
	len = ft_strlen(ptr);
	ptr[len] = '\0';
	return (ptr);
}
