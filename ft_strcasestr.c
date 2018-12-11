/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcasestr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sirafe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 16:18:21 by sirafe            #+#    #+#             */
/*   Updated: 2018/12/11 16:38:57 by sirafe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcasestr(const char *s1, const char *s2)
{
	int	i;

	if (!*s2)
		return ((char *)s1);
	while (*s1)
	{
		if (ft_toupper((int)*s1) == ft_toupper((int)s2[0]))
		{
			i = 1;
			while (s2[i] != '\0'
				&& ft_toupper((int)*(s1 + i)) == ft_toupper((int)s2[i]))
				i++;
			if (!s2[i])
				return ((char*)s1);
		}
		s1++;
	}
	return (NULL);
}
