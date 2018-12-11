/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcasecmp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sirafe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 18:25:31 by sirafe            #+#    #+#             */
/*   Updated: 2018/12/11 18:26:03 by sirafe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcasecmp(const char *s1, const char *s2)
{
	while (ft_toupper((int)*s1) == ft_toupper((int)*s2++))
		if (*s1++ == 0)
			return (0);
	return (*(unsigned char *)s1 - *(unsigned char *)--s2);
}
