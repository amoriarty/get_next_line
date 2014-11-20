/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 16:48:53 by alegent           #+#    #+#             */
/*   Updated: 2014/11/20 14:59:44 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	int			x;
	size_t		i;
	size_t		s1_len;
	size_t		s2_len;
	char		*res;

	x = 0;
	i = 0;
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	if ((res = ft_strnew(s1_len + s2_len + 1)) == NULL)
		return (NULL);
	while (i < s1_len)
	{
		res[x++] = *s1;
		s1++;
		i++;
	}
	i = 0;
	while (i < s2_len)
	{
		res[x++] = *s2;
		s2++;
		i++;
	}
	res[x] = '\0';
	return (res);
}
