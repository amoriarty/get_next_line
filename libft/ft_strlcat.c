/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 12:13:51 by alegent           #+#    #+#             */
/*   Updated: 2014/11/08 15:56:17 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		x;

	i = 0;
	x = 0;
	while (dst[i] != '\0')
		i++;
	while (src[x] != '\0' && x < size)
	{
		dst[i] = src[x];
		i++;
		x++;
	}
	dst[i] = '\0';
	if (ft_strlen(src) >= size)
		return (ft_strlen(src) + ft_strlen(dst));
	else
		return (ft_strlen(src) + size);
}
