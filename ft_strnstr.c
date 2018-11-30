/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sirafe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 15:03:48 by sirafe            #+#    #+#             */
/*   Updated: 2018/11/30 15:05:09 by sirafe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *find, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	l;

	if (*find == 0)
		return ((char *)s);
	if (len == 0)
		return (0);
	l = len;
	j = 0;
	while (s[j] != '\0' && len-- > 0)
	{
		i = 0;
		while (s[i + j] == find[i] && i + j < l)
		{
			if (find[i + 1] == 0)
				return ((char *)(s + j));
			if (s[i + j] == 0)
				return (0);
			i++;
		}
		j++;
	}
	return (0);
}
