/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 09:36:25 by cjosue            #+#    #+#             */
/*   Updated: 2019/10/03 09:36:27 by cjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

int						ft_shape_check(char *str)
{
	short int			i;
	int					side;
	int					n;

	i = 0;
	n = 0;
	side = 0;
	while (i < 20)
	{
		if (str[i] == '#')
		{
			n++;
			if ((i + 1) < 20 && str[i + 1] == '#')
				side++;
			if ((i - 1) >= 0 && str[i - 1] == '#')
				side++;
			if ((i + 5) < 20 && str[i + 5] == '#')
				side++;
			if ((i - 5) >= 0 && str[i - 5] == '#')
				side++;
		}
		i++;
	}
	return ((side == 6 || side == 8) && n == 4);
}

int						ft_character_check(char *str, const int ret)
{
	short int			i;

	i = -1;
	if (ret < 20)
		return (0);
	while (++i < 20)
	{
		if (i % 5 < 4 && (str[i] == '.' || str[i] == '#'))
			continue ;
		else if (i % 5 == 4 && str[i] == '\n')
			continue ;
		else
			return (0);
	}
	if (ret == 21 && str[20] != '\n')
		return (0);
	if (!(ft_shape_check(str)))
		return (0);
	return (1);
}

void					ft_figure_position(char *str, t_figure *list, int num)
{
	short int			i;
	unsigned long int	x;
	unsigned long int	y;

	x = 281479271743489;
	y = 65535;
	i = -1;
	list->id = num + 'A';
	while (++i < 20)
		if (str[i] == '#')
			list->position |= 1L << (16 * (i / 5) + (i % 5));
	while (!(list->position & x))
		list->position = list->position >> 1;
	while (!(list->position & y))
		list->position = list->position >> 16;
	while ((list->position & (x << list->width)) && list->width < 4)
		list->width++;
	while ((list->position & (y << (list->height * 16))) && list->height < 4)
		list->height++;
}

int						ft_read_file(int fd, t_figure *list)
{
	int					ret;
	char				buf[21];
	int					number;
	int					j;

	j = 0;
	number = 0;
	if (fd == -1)
		return (0);
	while ((ret = read(fd, buf, 21)) && number < 26)
	{
		if (!(ft_character_check(buf, ret)))
		{
			close(fd);
			return (0);
		}
		ft_figure_position(buf, &list[number], number);
		number++;
		j = ret;
	}
	close(fd);
	if (j == 21)
		return (0);
	return (number);
}
