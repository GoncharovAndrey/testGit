/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 13:44:23 by cjosue            #+#    #+#             */
/*   Updated: 2019/09/08 14:30:37 by cjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int		main(void)
{
	char	buff1[] = "abcdefghijklmnopqrstuvwxyz";
	char	buff2[] = "abcdefghijklmnopqrstuvwxyz";
	char	*src = "string with\200inside !";

	memccpy(buff1, src, '\200', 21);
	ft_memccpy(buff2, src, '\200', 21);
	printf("%s\n", buff1);
	printf("%s\n", buff2);
/*	argc = 0;
	argv[0] = memccpy(argv[1], argv[2], '5', 5);
	printf("return__ %s\n", argv[0]);
	printf("dst_____ %s\n", argv[1]);
	argv[0] = NULL;
	argv[0] = ft_memccpy(argv[3], argv[2],'5', 5);
	printf("return__ %s\n", argv[0]);
	printf("dst_____ %s\n", argv[3]); */
	return 0;
}

