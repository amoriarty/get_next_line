/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 15:53:47 by alegent           #+#    #+#             */
/*   Updated: 2014/11/20 13:14:02 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"
#include "get_next_line.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int		find_eol(char *line, char **too_much)
{
	int		i;
	int		start;
	int		len;

	i = 0;
	len = 0;
	if (ft_strchr(line, EOL) != NULL)
	{
		while (line[i] != EOL)
			i++;
		start = i;
		while (line[i] != '\0')
		{
			i++;
			len++;
		}
		*too_much = ft_strsub(line, start, len);
		line[start] = '\0';
		if (too_much == NULL)
			return (ERROR);
		return (TRUE);
	}
	return (FALSE);
}

int				get_next_line(const int fd, char **line)
{
	int				ret;
	char			buffer[BUFF_SIZE];
	static char		*too_much;

	if (fd != ERROR)
	{
		if (too_much != NULL && *line == NULL)
		{
			*line = ft_strdup(too_much);
			ft_strdel(&too_much);
		}
		else if (too_much != NULL && *line != NULL)
		{
			printf("line = %s\n", *line);
			*line = ft_strjoin(*line, too_much);
			printf("line = %s\n", *line);
			ft_strdel(&too_much);
		}
		while ((ret = read(fd, buffer, BUFF_SIZE + 1)))
		{
			buffer[ret] = '\0';
			*line = ft_strjoin(*line, buffer);
			if (find_eol(*line, &too_much) == TRUE)
				return (0);
		}
		return (1);
	}
	return (ERROR);
}
