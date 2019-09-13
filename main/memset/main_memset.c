/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 13:44:23 by cjosue            #+#    #+#             */
/*   Updated: 2019/09/08 12:59:24 by cjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int		main(int argc, char **argv)
{
	int		array[10];
	int		number;

	number = 0;
	argc = 0;
	argv[0] = argv[1];
  	//	array = (int*)malloc(sizeof(int) * 10);
	while (number < 10)
	{
		array[number] = number;
		number++;
	}
	memset(array,1,4);
	number = 0;
	while (number < 10)
	{
		printf("%d\n", array[number]);
		number++;
	}
	number = 0;
	while (number < 10)
	{
		array[number] = number;
		number++;
	}
	memset(array,1,4);
	number = 0;
	while (number < 10)
	{
		printf("%d\n", array[number]);
		number++;
	}
	memset(argv[1], argv[2][0], 3);
	printf("%s\n", argv[1]);
	argv[1] = argv[0];
	memset(argv[1], argv[2][0], 3);
	printf("%s\n", argv[1]);
	return 0;
}

