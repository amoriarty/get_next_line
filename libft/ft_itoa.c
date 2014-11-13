/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 17:37:30 by alegent           #+#    #+#             */
/*   Updated: 2014/11/07 17:02:40 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_digitlen(int n)
{
	int		res;

	res = 0;
	if (n < 0)
		n = -n;
	if (n > 9)
	{
		res++;
		return (res + ft_digitlen(n / 10));
	}
	res++;
	return (res);
}

char			*ft_itoa(int n)
{
	int		isneg;
	int		digitlen;
	char	*itoa;

	isneg = FALSE;
	if (n == 0)
		return ("0");
	if (n < 0)
	{
		n = -n;
		isneg = TRUE;
	}
	digitlen = ft_digitlen(n) + isneg;
	itoa = ft_strnew(digitlen);
	itoa[digitlen] = '\0';
	digitlen--;
	while (n != 0)
	{
		itoa[digitlen] = (n % 10) + '0';
		n /= 10;
		digitlen--;
	}
	if (isneg == TRUE)
		itoa[digitlen] = '-';
	return (itoa);
}
