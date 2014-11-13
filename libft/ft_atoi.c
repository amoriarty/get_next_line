/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 17:42:46 by alegent           #+#    #+#             */
/*   Updated: 2014/11/08 17:38:30 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_digitlen(const char *str)
{
	int		i;
	int		res;

	i = 0;
	res = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res++;
		i++;
	}
	if (str[res] == '0')
		res++;
	return (res);
}

static int		ft_power(int digitlen)
{
	int		i;
	int		res;

	i = 1;
	res = 1;
	while (i < digitlen)
	{
		res *= 10;
		i++;
	}
	return (res);
}

int				ft_atoi(const char *str)
{
	int		i;
	int		digitlen;
	int		res;

	i = 0;
	str = ft_strtrim(str);
	digitlen = ft_digitlen(str);
	res = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res += (str[i] - '0') * ft_power(digitlen);
		i++;
		digitlen--;
	}
	if (str[0] == '-')
		res = -res;
	return (res);
}
