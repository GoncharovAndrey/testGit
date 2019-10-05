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

#include <fillit.h>
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (len--)
	{
		((unsigned char *)b)[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

int		main(int ac, char **av)
{
	figure			tetramino[27];
	int				ret;
	unsigned short	map[16];
	int				size;

	ret = ft_read_file(open(av[1], O_RDONLY), tetramino);
	printf("%d kol-vo tetramino\n", ret);
	printf("%c  id\n", tetramino[0].id);
	size = ft_filling(map, &tetramino[0], ret);
	ft_memset(map, 0, sizeof(unsigned short) * 16);
	printf("%d fillit\n", size);
	printf("%d - x %d - y ___ tetramino 1\n", tetramino[0].x,tetramino[0].y);
	printf("%d - x %d - y ___ tetramino 2\n", tetramino[1].x,tetramino[1].y);
	printf("%d - x %d - y ___ tetramino 3\n", tetramino[2].x,tetramino[2].y);
	printf("%d - x %d - y ___ tetramino 4\n", tetramino[3].x,tetramino[3].y);
	return (0);
}
