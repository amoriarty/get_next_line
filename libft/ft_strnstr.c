/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 15:26:40 by alegent           #+#    #+#             */
/*   Updated: 2014/11/04 15:46:12 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t		i;
	int			x;
	char		*dst;

	i = 0;
	x = 0;
	dst = (char *)malloc(sizeof(char) * ft_strlen(s1));
	while (s1[i] != s2[x] && i < n)
	{
		if (s1[i] == '\0')
			return (NULL);
		i++;
	}
	if ((i + ft_strlen(s2)) >= n)
		return (NULL);
	while (s1[i] != '\0')
	{
		dst[x] = s1[i];
		i++;
		x++;
	}
	dst[x] = '\0';
	return (dst);
}
