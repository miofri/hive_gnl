/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skesuma <skesuma@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 13:42:11 by skesuma           #+#    #+#             */
/*   Updated: 2022/01/18 13:58:43 by skesuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	handle_line(const int fd, char **line, char **bitem)
{
	int		i;
	char	*tmp;

	i = 0;
	while (bitem[fd][i] != '\n' && bitem[fd][i] != '\0')
		i++;
	if (bitem[fd][i] == '\n')
	{
		*line = ft_strsub(bitem[fd], 0, i);
		tmp = ft_strdup(&(bitem[fd][i + 1]));
		free(bitem[fd]);
		bitem[fd] = tmp;
		if (bitem[fd][0] == '\0')
		{
			free(bitem[fd]);
			bitem[fd] = NULL;
		}
	}
	else if (bitem[fd][i] == '\0')
	{
		*line = ft_strdup(bitem[fd]);
		free(bitem[fd]);
		bitem[fd] = NULL;
	}
	return (1);
}

int	check_(const int fd, char **line, int ret, char **bitem)
{
	if (ret == 0 && bitem[fd] == NULL)
		return (0);
	else if (ret < 0)
		return (-1);
	else
		return (handle_line(fd, line, bitem));
}

int	get_next_line(const int fd, char **line)
{
	static char	*bitem[MAX_FD];
	char		buf[BUFF_SIZE + 1];
	int			ret;
	char		*tmp;

	if (fd < 0 || line == NULL || BUFF_SIZE < 0 || fd > MAX_FD)
		return (-1);
	ret = read(fd, buf, BUFF_SIZE);
	while (ret > 0)
	{
		if (!bitem[fd])
			bitem[fd] = ft_strdup("");
		buf[ret] = '\0';
		tmp = ft_strjoin(bitem[fd], buf);
		if (!tmp)
			return (-1);
		free(bitem[fd]);
		bitem[fd] = tmp;
		if (ft_strchr(bitem[fd], '\n'))
			break ;
		ret = read(fd, buf, BUFF_SIZE);
	}
	return (check_(fd, line, ret, bitem));
}
