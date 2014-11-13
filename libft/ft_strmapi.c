/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 15:46:38 by alegent           #+#    #+#             */
/*   Updated: 2014/11/08 13:47:23 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*map;

	i = 0;
	len = ft_strlen(s);
	map = ft_strnew(ft_strlen(s));
	if (map == NULL)
		return (NULL);
	if (f == NULL)
		return (ft_strdup(s));
	while (i < len)
	{
		map[i] = (*f)(i, s[i]);
		i++;
	}
	return (map);
}
