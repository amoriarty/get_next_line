/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 18:23:17 by alegent           #+#    #+#             */
/*   Updated: 2014/11/17 16:28:45 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void		ft_bzero(void *s, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		*(char *)s = 0;
		s++;
		i++;
	}
}
