/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/21 13:51:06 by alegent           #+#    #+#             */
/*   Updated: 2014/11/21 14:00:15 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"
#include "get_next_line.h"

int				get_next_line(const int fd, char **line)
{
	int				ret;
	char			buffer[BUFF_SIZE];
	char			*tmp;
	static char		*too_much;

	if (fd != -1 || !line)
	{
		if (too_much && (tmp = ft_strchr(too_much, EOL)))
		{
			*line = ft_strsub(too_much, 0, ft_strlen(too_much) - ft_strlen(tmp));
			too_much = ft_strchr(too_much, EOL) + 1;
			return (1);
		}
		while ((ret = read(fd, buffer, BUFF_SIZE + 1)))
		{
			buffer[ret] = '\0';
			too_much = ft_strjoin(too_much, buffer);
			if ((tmp = ft_strchr(too_much, EOL)))
			{
				*line = ft_strsub(too_much, 0, ft_strlen(too_much) - ft_strlen(tmp));
				too_much = ft_strchr(too_much, EOL) + 1;
				return (1);
			}
		}
		return (0);
	}
	return (ERROR);
}
