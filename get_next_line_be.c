/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleste-l <fleste-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/30 13:47:37 by fleste-l          #+#    #+#             */
/*   Updated: 2018/02/12 15:48:00 by fleste-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*newl(char *bl)
{
	char	*el;

	el = ft_strchr(bl, '\n');
	if (el)
		return (ft_strsub(bl, 0, el - bl));
	else
		return (ft_strdup(bl));
}

static char	*newbl(char *bl)
{
	char	*el;
	char	*mem;

	mem = bl;
	el = ft_strchr(bl, '\n');
	if (el)
		bl = ft_strsub(bl, el - bl + 1, ft_strlen(bl));
	else
		bl = NULL;
	free(mem);
	return (bl);
}

int			get_next_line(const int fd, char **line)
{
	int				n;
	char			*mem;
	char			buff[BUFF_SIZE + 1];
	static char		*bl[FD_NBR];

	if (!line || fd < 0 || BUFF_SIZE < 1 || read(fd, buff, 0) < 0)
		return (-1);
	if (!(bl[fd] = !bl[fd] ? ft_strnew(0) : bl[fd]))
		return (-1);
	while (!ft_strchr(bl[fd], '\n') && (n = read(fd, buff, BUFF_SIZE)) > 0)
	{
		mem = bl[fd];
		buff[n] = '\0';
		bl[fd] = ft_strjoin(bl[fd], buff);
		free(mem);
	}
	if (n == -1)
		return (-1);
	*line = newl(bl[fd]);
	bl[fd] = newbl(bl[fd]);
	if (!bl[fd] && !ft_strlen(*line))
		return (0);
	return (1);
}
