/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sirafe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 18:08:44 by sirafe            #+#    #+#             */
/*   Updated: 2018/12/05 18:13:16 by sirafe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int nbr)
{
	int		neg;
	int		size;
	int		temp;
	char	*base;
	char	*ptr;

	neg = (nbr < 0) ? 1 : 0;
	size = (neg) ? 3 : 2;
	temp = nbr;
	base = "0123456789";
	while (temp /= 10)
		size++;
	ptr = (char *)malloc(size);
	if (ptr == NULL)
		return (NULL);
	ptr[--size] = '\0';
	ptr[--size] = (nbr < 0) ? base[-(nbr % 10)] : base[nbr % 10];
	while (nbr /= 10)
		ptr[--size] = (nbr < 0) ? base[-(nbr % 10)] : base[nbr % 10];
	if (neg)
		ptr[--size] = '-';
	return (ptr);
}
