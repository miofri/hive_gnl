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

/* ft_strdup: returns a ptr to a new string duplicate of string s1. (malloc)
** ft_strsub: returns a substr (malloc) from and to the given indexes.
** ft_strchr: returns a ptr to the first occurence of the given char.
** ft_strjoin: returns a fresh null-terminated s1 + s2. (malloc)
**
** handle_line will find where \n or \0 is.
** When \n is found, we assign the line starting from 0 to where \n was found.
** strsub will only go until i - 1. We will replace current bitem[fd] with the
** string after \n. if the first char of bitem[fd] is \0, EOF has been reached
** and bitem[fd] is not needed anymore, thus freed.
** When \0 is found, we can assign the whole string to line since there is no
** \n and free bitem[fd] as the EOF has been reached. */
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

/* checks if read() has finished reading the file, if reading failed or
** else. */
int	check_(const int fd, char **line, int ret, char **bitem)
{
	if (ret == 0 && bitem[fd] == NULL)
		return (0);
	else if (ret < 0)
		return (-1);
	else
		return (handle_line(fd, line, bitem));
}

/* this function will get the no. of bytes in the file and reads the file into
** buf from start to either EOF or \n. We're joining BUFF_SIZE at a time
** to bitem[fd] by replacing the current bitem[fd] with bitem[fd] + buf, which
** requires freeing bitem[fd] every time to avoid leaks before reassigning it.
** When EOF/\n is found, we move forward to func check_.
** static char is used to so that the 2D array remembers what was stored in it
** between calls. It is also used to keep track of different lines stored in
** each FDs.*/
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
