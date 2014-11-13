/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 12:22:54 by alegent           #+#    #+#             */
/*   Updated: 2014/11/08 13:32:36 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_striter(char *s, void (*f)(char *))
{
	unsigned int		i;
	unsigned int		len;

	i = 0;
	len = ft_strlen(s);
	if (s != NULL && f != NULL)
	{
		while (i < len)
		{
			(*f)(s);
			s++;
			i++;
		}
	}
}
