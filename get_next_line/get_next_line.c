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
//	printf("%s ____cut\n", dst[fd]);
//	printf("%zu __len\n", len);
	tmp = ft_strsub(dst[fd], i + 1 , len - i);
	ft_strdel(&dst[fd]);
//	printf("%s ____tmp\n", tmp);
	dst[fd] = tmp;
//	printf("%s ___ cut\n", dst[fd]);
}

static void			ft_pr_strjoin(char **dst, char *src, int fd)
{
	char			*tmp;

	tmp = ft_strjoin(dst[fd], src);
//	printf("%s\n", tmp);
	ft_strdel(&dst[fd]);
//	printf("%s  __tmp\n", tmp);
	dst[fd] = tmp;
//	printf("%s  __dst\n", dst[fd]);
}

static int			ft_read(char **dst, const int fd)
{
	char			buf[BUFF_SIZE + 1];
	int				ret;
	int				yes;
	int				i;

	yes = 0;
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		i = 0;
/*		while (buf[i] && yes != 1)
		{
			if (buf[i++] == '\n')
				yes = 1;
		} */
		ft_pr_strjoin(dst, buf, fd);
	}
	if (ret < 0)
		return (-1);
//	printf("%s ___read\n", dst[fd]);
//	if (ret == 0 )
//		ft_pr_strjoin(dst, buf);
	return (yes);
}

static int			ft_writing(char **dst, char **line, int fd)
{
	size_t			i;
	int				yes;

	i = 0;
	yes = 0;
	while (dst[fd][i] && dst[fd][i] != '\n')
		i++;
	if (dst[fd][i] && dst[fd][i] == '\n')
		yes = 1;
	if(!(*line = ft_strsub(dst[fd], 0, i)))
	{
		ft_strdel(&dst[fd]);
		ft_strdel(&*line);
		return (-1);
	}
	ft_strncut(dst, i , fd);
	return (yes);
}

int					get_next_line(const int fd, char **line)
{
	static	char	*fd_buf[255];

	//	if (!fd_buf || fd_buf == NULL)
//		fd_buf = (char**)malloc(sizeof(char**) * 256);
	if (!line || fd < 0)
		return (-1);
	if (!fd_buf[fd])
		fd_buf[fd] = ft_strnew(1);

	if ( (ft_read(fd_buf, fd)) < 0)
	{
		ft_strdel(&fd_buf[fd]);
		return (-1);
	}
//	printf("%s ____fd_buf\n", fd_buf[fd]);
	return (ft_writing(fd_buf, line, fd));
//	return (0);
}
