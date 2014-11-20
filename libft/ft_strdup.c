/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 15:34:31 by alegent           #+#    #+#             */
/*   Updated: 2014/11/20 13:09:25 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char		*ft_strdup(const char *s1)
{
	size_t		i;
	size_t		len;
	char		*s2;

	i = 0;
	len = ft_strlen(s1);
	if ((s2 = ft_strnew(len)) == NULL || s1 == NULL)
			return (NULL);
	while (!s1)
	{
		s2[i++] = *s1;
		s1++;
	}
	return (s2);
}
