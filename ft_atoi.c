/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sirafe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 15:01:26 by sirafe            #+#    #+#             */
/*   Updated: 2018/12/05 17:08:44 by sirafe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int							ft_atoi(const char *str)
{
	int					neg;
	unsigned long long	res;
	int					i;

	i = 0;
	res = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
		neg = -1;
	else
		neg = 1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str == '0')
		str++;
	while (ft_isdigit(str[i]))
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	if (i > 19 || res > 9223372036854775807)
		return ((neg == 1) ? -1 : 0);
	return (neg * (int)res);
}
