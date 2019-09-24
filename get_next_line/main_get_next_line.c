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
	res = 0;
//	argv[1] = NULL;
	fd = open(argv[1],O_WRONLY);
	line = (char**)malloc(sizeof(char*) * 10);
//	printf("%d  ___ fd\n", fd);
	//	free(line);
//	line = NULL;
//	line[1] = NULL;
	res = get_next_line(fd, &line[1]);
//	printf("%s____line 1\n", line[1]);
	printf("% d____ res 1\n", res);
	res =  get_next_line(-1, &line[2]);
	printf("%s ____line2\n", line[2]);
	printf("%d ____ res2\n", res);
	res =  get_next_line(5000, &line[3]);
	printf("%s ____line3\n", line[3]);
	printf("%d ____ res3\n", res);
	res =  get_next_line(fd, &line[4]);
	printf("%s ____line4\n", line[4]);
	printf("%d ____ res4\n", res);
	res =  get_next_line(fd, &line[5]);
	printf("%s ____line5\n", line[5]);
	printf("%d ____ res5\n", res);
//	free(line[1]);
	return (0);
}
