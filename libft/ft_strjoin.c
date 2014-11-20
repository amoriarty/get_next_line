/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 16:48:53 by alegent           #+#    #+#             */
/*   Updated: 2014/11/20 16:18:32 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

#include <stdio.h>
#include <string.h>

char		*ft_strjoin(char const *s1, char const *s2)
{
	int			x;
	size_t		i;
	size_t		s1_len;
	size_t		s2_len;
	char		*res;

	x = 0;
	i = 0;
	if (s1 == NULL)
		return (ft_strdup(s2));
	if (s2 == NULL)
		return (ft_strdup(s1));
	s1_len = strlen(s1);
	s2_len = strlen(s2);
	if ((res = ft_strnew(s1_len + s2_len + 1)) == NULL)
		return (NULL);
	while (i < s1_len)
		res[x++] = s1[i++];
	i = 0;
	while (i < s2_len)
		res[x++] = s2[i++];
	res[x] = '\0';
	return (res);
}
