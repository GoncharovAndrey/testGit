/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 13:44:23 by cjosue            #+#    #+#             */
/*   Updated: 2019/09/05 14:07:21 by cjosue           ###   ########.fr       */
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
//	array = (int*)malloc(sizeof(int) * 10);
	while (number < 10)
	{
		array[number] = number;
		number++;
	}
	memset(array,1,10);
	number = 0;
	while (number < 10)
	{
		printf("%d\n", array[number]);
		number++;
	}
	return 0;
}

