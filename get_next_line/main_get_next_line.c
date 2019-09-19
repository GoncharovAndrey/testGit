/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_get_next_line.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 21:20:30 by cjosue            #+#    #+#             */
/*   Updated: 2019/09/18 21:20:32 by cjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	int		fd;
	int		res;
	char	**line;

	argc = 0;
	fd = open(argv[1],O_RDONLY);
	line = (char**)malloc(sizeof(char*) * 10);
	res = get_next_line(fd, &line[1]);
	printf("%s\n", line[1]);
	res =  get_next_line(fd, &line[2]);
	printf("%s\n", line[2]);
	printf("%d\n", res);
	return (0);
}
