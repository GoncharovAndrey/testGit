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

int		ft_check_tetrino_on_map(unsigned short *map, figure *list)
{
//	if (*(unsigned long int *)(map + list->y) & (list->position << list->x))
//		return (0);
//	return (1);
	return (!(*(unsigned long int *)(map + list->y) & (list->position << list->x)));
}

void	ft_write_map(unsigned short *map, figure *list)
{
	*(unsigned long int *)(map + list->y) ^= list->position << list->x;
}

int		rec = 0;

int		ft_map_filling(unsigned short *map, figure *list, int size)
{
	if (list->id == 0)
		return (1);
	rec++;
	printf("%d  _recurs, %c tetramoni \n", rec,list->id);
	while (list->y <= size - list->height)
	{
		list->x = 0;
		while (list->x <= size - list->width)
		{
			if (ft_check_tetrino_on_map(map, list))
			{
				ft_write_map(map, list);
				if (ft_map_filling(map, list + 1, size))
				{
					printf("(%c yes)\n", list->id);
					return (1);
				}
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

int		ft_filling(unsigned short *map, figure *list, int num)
{
	int		size;

	size = 1;
	while ( num * 4 > size * size)
		size++;
	printf("%d size\n", size);
	while (!(ft_map_filling(map, list, size)) && size < 17)
	{
		printf("fuck %d\n", size);
		sleep(5);
		size++;
	}
	return (size);
}
