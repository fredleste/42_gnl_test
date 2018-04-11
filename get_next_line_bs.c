#include "get_next_line.h"

int			get_next_line(const int fd, char **line)
{
	int				n;
	char			*mem;
	char			buff[BUFF_SIZE + 1];
	static char		*bl;

	if (!line || fd < 0 || BUFF_SIZE <= 0 || read(fd, buff, 0) < 0)
		return (-1);
	bl = !bl ? ft_strnew(0) : bl;
	while (!ft_strchr(bl, '\n') && (n = read(fd, buff, BUFF_SIZE)) > 0)
	{
		mem = bl;
		buff[n] = '\0';
		bl = ft_strjoin(bl, buff);
		free(mem);
	}
	*line = (ft_strchr(bl, '\n') ? ft_strsub(bl, 0, \
		ft_strchr(bl, '\n') - bl) : ft_strdup(bl));
	if (ft_strchr((mem = bl), '\n'))
		bl = ft_strsub(bl, ft_strchr(bl, '\n') - bl + 1, ft_strlen(bl));
	else
		bl = NULL;
	free(mem);
	return (!bl && ft_strlen(*line) == 0 ? 0 : 1);
}
