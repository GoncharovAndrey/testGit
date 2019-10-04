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

int		main(int ac, char **av)
{
	figure			tetramino[27];
	int				ret;
	unsigned short	map[16];

	ret = ft_read_file(open(av[1], O_RDONLY), tetramino);
	printf("%d ssss\n", ret);
	printf("%lu vdd\n", tetramino[0].position);
	return (0);
}
