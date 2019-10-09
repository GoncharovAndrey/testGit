/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 18:20:48 by cjosue            #+#    #+#             */
/*   Updated: 2019/10/03 18:20:52 by cjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

void				ft_new_list(t_figure *list)
{
	int				i;

	i = 0;
	while (i != 27)
	{
		list[i].x = 0;
		list[i].y = 0;
		list[i].position = 0;
		list[i].height = 0;
		list[i].width = 0;
		list[i].id = 0;
		i++;
	}
}

void				ft_new_map(char *str, int size)
{
	int				i;

	i = 1;
	ft_memset(str, 46, (size + 1) * size);
	while (i <= size)
	{
		str[(size) * i + i - 1] = '\n';
		i++;
	}
}

void				ft_print_map(t_figure *list, int size)
{
	char			*str;
	int				x;
	int				y;

	str = ft_strnew((size + 1) * size);
	ft_new_map(str, size);
	while (list->id)
	{
		y = 0;
		while (y < list->height)
		{
			x = 0;
			while (x < list->width)
			{
				if ((list->position >> (16 * y + x)) & 1)
					str[(list->y + y) * (size + 1) + x + list->x] = list->id;
				x++;
			}
			y++;
		}
		list++;
	}
	ft_putstr(str);
	ft_strdel(&str);
}

int					main(int ac, char **av)
{
	t_figure		tetramino[27];
	int				ret;
	unsigned short	map[16];
	int				size;

	ac = 0;
	if (ac > 2)
	{
		ft_putendl_fd("error", 1);
		return (0);
	}
	size = 0;
	ft_new_list(tetramino);
	if (!(ret = ft_read_file(open(av[1], O_RDONLY), tetramino)))
	{
		ft_putendl_fd("error", 1);
		return (0);
	}
	while (size != 16)
		map[size++] = 0;
	size = ft_filling(map, &tetramino[0], ret);
	ft_print_map(tetramino, size);
	return (0);
}
