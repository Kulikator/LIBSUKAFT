/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sirafe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 15:51:15 by sirafe            #+#    #+#             */
/*   Updated: 2018/11/28 16:12:22 by sirafe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *b, const char *a)
{
	int len1;
	int len2;

	len2 = strlen(a);
	if (len2 == 0)
		return (char *)b;
	len1 = strlen(b);
	while (len1 >= len2)
	{
		len1--;
		if (memcmp(b, a, len2) == 0)
			return (char *)b;
		b++;
	}
	return (NULL);
}
