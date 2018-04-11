/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleste-l <fleste-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/30 13:56:22 by fleste-l          #+#    #+#             */
/*   Updated: 2018/04/05 12:47:01 by fleste-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"

int		main(int argc, char **argv)
{
	int		fd;
	char	*line;
	int		i;
	int		res;

	if (argc != 2)
		return (-1);
	i = 0;
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		printf("MAIN open error -1");
		return (-1);
	}
	while ((res = get_next_line(fd, &line)) > 0)
	{
		printf("%d\t%s\n", i, line);
		free(line);
		i++;
	}
	if (res == -1)
		printf("GNL error -1");
//	sleep(100);
	return (0);
}
