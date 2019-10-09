/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_filling.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 09:08:05 by cjosue            #+#    #+#             */
/*   Updated: 2019/10/04 09:08:15 by cjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>
#include <unistd.h>

int		ft_check_tetrino_on_map(unsigned short *map, t_figure *list)
{
	return (!(*(unsigned long int *)(map + list->y) & \
				(list->position << list->x)));
}

void	ft_write_map(unsigned short *map, t_figure *list)
{
	*(unsigned long int *)(map + list->y) ^= list->position << list->x;
}

int		ft_map_filling(unsigned short *map, t_figure *list, int size)
{
	if (list->position == 0)
		return (1);
	list->y = 0;
	while (list->y <= size - list->height)
	{
		list->x = 0;
		while (list->x <= size - list->width)
		{
			if (ft_check_tetrino_on_map(map, list))
			{
				ft_write_map(map, list);
				if (ft_map_filling(map, list + 1, size))
					return (1);
				ft_write_map(map, list);
			}
			list->x++;
		}
		list->y++;
	}
	list->x = 0;
	list->y = 0;
	return (0);
}

int		ft_filling(unsigned short *map, t_figure *list, int num)
{
	int		size;
	int		i;

	size = 1;
	i = 0;
	while (num * 4 > size * size)
		size++;
	while (!(ft_map_filling(map, list, size)) && size < 17)
	{
		while (i != 16)
			map[i++] = 0;
		size++;
	}
	return (size);
}
