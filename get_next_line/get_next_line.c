/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 14:28:30 by cjosue            #+#    #+#             */
/*   Updated: 2019/09/17 14:28:33 by cjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft/libft.h"
#include <stdio.h>
#include <string.h>

static void			ft_strncut(char **dst, size_t i, int fd)
{
	size_t			len;
	char			*tmp;

	len = ft_strlen(dst[fd]);
	tmp = ft_strsub(dst[fd], i + 1, len - i);
	ft_strdel(&dst[fd]);
	dst[fd] = tmp;
}

static void			ft_pr_strjoin(char **dst, char *src, int fd)
{
	char			*tmp;

	tmp = ft_strjoin(dst[fd], src);
	ft_strdel(&dst[fd]);
	dst[fd] = tmp;
}

static int			ft_read(char **dst, const int fd)
{
	char			buf[BUFF_SIZE + 1];
	int				ret;

	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		ft_pr_strjoin(dst, buf, fd);
		if (ft_strchr(buf, '\n'))
			break ;
	}
	if (ret < 0)
		return (-1);
	return (ret > 0);
}

static int			ft_writing(char **dst, char **line, int fd, int ret)
{
	size_t			i;

	i = 0;
	while (dst[fd][i] && dst[fd][i] != '\n')
		i++;
	if (ret == 0 && (dst[fd] == NULL || dst[fd][0] == '\0'))
		return (0);
	if (!(*line = ft_strsub(dst[fd], 0, i)))
	{
		ft_strdel(&dst[fd]);
		return (-1);
	}
	ft_strncut(dst, i, fd);
	return (1);
}

int					get_next_line(const int fd, char **line)
{
	static	char	*fd_buf[255];
	int				ret;

	if (!line || fd < 0)
		return (-1);
	if (!fd_buf[fd])
		fd_buf[fd] = ft_strnew(0);
	if ((ret = ft_read(fd_buf, fd)) < 0)
	{
		ft_strdel(&fd_buf[fd]);
		return (-1);
	}
	return (ft_writing(fd_buf, line, fd, ret));
}
