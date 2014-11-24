/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/21 13:51:06 by alegent           #+#    #+#             */
/*   Updated: 2014/11/24 15:16:07 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"
#include "get_next_line.h"

static int		ft_static(char ***line, char **too, char **tmp)
{
	if (*too && (*tmp = ft_strchr(*too, EOL)))
	{
		**line = ft_strsub(*too, 0, ft_strlen(*too) - ft_strlen(*tmp));
		*too = ft_strchr(*too, EOL) + 1;
		return (TRUE);
	}
	return (FALSE);
}

int				get_next_line(const int fd, char **line)
{
	int				ret;
	char			buffer[BUFF_SIZE + 1];
	char			*tmp;
	static char		*too;

	if (fd != -1 || !line)
	{
		if (ft_static(&line, &too, &tmp) == TRUE)
			return (1);
		while ((ret = read(fd, buffer, BUFF_SIZE)))
		{
			buffer[ret] = '\0';
			too = ft_strjoin(too, buffer);
			if ((tmp = ft_strchr(too, EOL)))
			{
				*line = ft_strsub(too, 0, ft_strlen(too) - ft_strlen(tmp));
				too = ft_strchr(too, EOL) + 1;
				return (1);
			}
		}
		return (0);
	}
	return (ERROR);
}
