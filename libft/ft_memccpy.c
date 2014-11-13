/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 19:01:47 by alegent           #+#    #+#             */
/*   Updated: 2014/11/07 17:36:28 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		*(char *)dst = *(char *)src;
		if (*(char *)src == (unsigned char)c)
		{
			dst++;
			return (dst);
		}
		i++;
		dst++;
		src++;
	}
	return (NULL);
}
