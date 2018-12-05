/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sirafe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 15:49:34 by sirafe            #+#    #+#             */
/*   Updated: 2018/12/05 16:31:42 by sirafe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*copy(char const *s, char c)
{
	size_t	i;
	char	*res;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	res = (char *)malloc(sizeof(char) * (i + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		res[i] = s[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

static	size_t	nbwords(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		if ((i == 0 && s[i] != c) || (s[i] != c && s[i - 1] == c))
			i++;
		s++;
	}
	return (i);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**res;
	size_t	word;
	size_t	i;

	if (!s)
		return (NULL);
	res = (char **)malloc(sizeof(char *) * (nbwords(s, c) + 1));
	if (!res)
		return (NULL);
	word = 0;
	i = 0;
	while (s[i])
	{
		if ((i == 0 && s[i] != c) || (s[i] != c && s[i - 1] == c))
		{
			res[word] = copy(s + i, c);
			word++;
		}
		i++;
	}
	res[word] = NULL;
	return (res);
}
