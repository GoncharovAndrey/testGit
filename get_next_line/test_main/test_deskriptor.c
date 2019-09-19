/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_deskriptor.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 14:03:40 by cjosue            #+#    #+#             */
/*   Updated: 2019/09/18 14:11:59 by cjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>

int		main(int argc, char **argv)
{
	int		fd_1;
	int		fd_2;

	argc = 0;
	fd_1 = open(argv[1], O_RDONLY);
	fd_2 = open(argv[2], O_RDONLY);
	printf("%d ___ %d",fd_1, fd_2);
	return (0);
}
