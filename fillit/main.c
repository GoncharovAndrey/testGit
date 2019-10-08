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

	size = 0;
	while (size != 27)
	{
		tetramino[size].x = 0;
		tetramino[size].y = 0;
		tetramino[size].position = 0;
		size++;
	}
	ret = ft_read_file(open(av[1], O_RDONLY), tetramino);
	printf("%d kol-vo tetramino\n", ret);
	printf("%c  id\n", tetramino[0].id);
	size = 0;
	while(size != 16)
		map[size++] = 0;
	//	ft_memset(map, 0, sizeof(unsigned short) * 16);
	size = 0;
	while (size != 5)
	{
		printf("%d ___ width, %d ____ height, %c ____ id\n", tetramino[size].width, tetramino[size].height, tetramino[size].id);
		size++;
	}

	size = ft_filling(map, &tetramino[0], ret);	
	printf("%d fillit\n", size);
	size = 0;
	while (tetramino[size].position)
	{
		printf("%d - x %d - y ___ tetramino %c\n", tetramino[size].x, tetramino[size].y, tetramino[size].id);
		size++;
	}
	return (0);
}
