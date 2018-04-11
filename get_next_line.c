/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleste-l <fleste-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/30 13:47:37 by fleste-l          #+#    #+#             */
/*   Updated: 2018/04/03 17:36:47 by fleste-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*endlchr(char *s)
{
	while (*s && *s != '\n')
		s++;
	if (*s == '\n')
		return (s);
	return (NULL);
}

static char	*newl(char *nl)
{
	char	*eol;

	eol = endlchr(nl);
	if (eol)
		return (ft_strsub(nl, 0, (eol - nl)));
	else
		return (ft_strdup(nl));
}

static char	*newbl(char *nb)
{
	char	*eol;
	char	*mem;

	mem = nb;
	eol = endlchr(nb);
	if (eol)
		nb = ft_strsub(nb, (eol - nb + 1), (ft_strlen(nb) - (eol - nb + 1)));
	else
		nb = NULL;
	free(mem);
	return (nb);
}

int			get_next_line(const int fd, char **line)
{
	int				n;
	char			*mem;
	char			*buff;
	static char		*bl;

	if (!(buff = (char*)malloc(sizeof(char) * (BUFF_SIZE + 1))))
		return (-1);
	if (!line || fd < 0 || BUFF_SIZE < 1 || read(fd, buff, 0) < 0)
		return (-1);
	if (!(bl = !bl ? ft_strnew(0) : bl))
		return (-1);
	while (!endlchr(bl) && (n = read(fd, buff, BUFF_SIZE)) > 0)
	{
		mem = bl;
		buff[n] = '\0';
		bl = ft_strjoin(bl, buff);
		free(mem);
	}
	free(buff);
	if (n == -1)
		return (-1);
	*line = newl(bl);
	bl = newbl(bl);
	return (!bl && !ft_strlen(*line) ? 0 : 1);
}
