/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 13:00:40 by alegent           #+#    #+#             */
/*   Updated: 2014/11/08 15:04:46 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	int		i;
	int		x;
	char	*dst;

	i = 0;
	x = 0;
	dst = (char *)malloc(sizeof(char) * ft_strlen(s));
	while (s[i] != c)
		i++;
	while (s[i] != '\0')
	{
		dst[x] = s[i];
		i++;
		x++;
	}
	dst[x] = '\0';
	return (dst);
}
