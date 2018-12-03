/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sirafe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 16:43:59 by sirafe            #+#    #+#             */
/*   Updated: 2018/12/03 17:24:14 by sirafe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	return ((9 <= c && c <= 13) || c == 32);
}

char		*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	fst;
	size_t	lst;
	char	*ptr;

	if (!s)
		return (NULL);
	i = 0;
	while (ft_isspace(s[i]))
		i++;
	fst = i;
	lst = i;
	while (s[i])
	{
		if (!ft_isspace(s[i]))
			lst = i + 1;
		i++;
	}
	ptr = (char *)malloc(lst - fst + 1);
	if (ptr == NULL)
		return (NULL);
	ft_strncpy(ptr, &s[fst], lst - fst);
	ptr[lst - fst] = '\0';
	return (ptr);
}
