/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 19:12:29 by alegent           #+#    #+#             */
/*   Updated: 2014/11/04 19:18:18 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*pdst;

	i = 0;
	pdst = (char *)dst;
	while (i < len)
	{
		*(char *)dst = *(char *)src;
		i++;
		dst++;
		src++;
	}
	return ((void *)pdst);
}
