/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 14:49:05 by alegent           #+#    #+#             */
/*   Updated: 2014/11/04 15:23:20 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		x;
	char	*dst;

	i = 0;
	x = 0;
	dst = (char *)malloc(sizeof(char) * ft_strlen(s1));
	while (s1[i] != s2[x])
	{
		if (s1[i] == '\0')
			return (NULL);
		i++;
	}
	while (s1[i] != '\0')
	{
		dst[x] = s1[i];
		i++;
		x++;
	}
	dst[x] = '\0';
	return (dst);
}
