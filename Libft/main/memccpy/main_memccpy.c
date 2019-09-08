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

int		main(int argc, char **argv)
{
	argc = 0;
	argv[0] = memccpy(argv[1], argv[2], '5', 5);
	printf("return__ %s\n", argv[0]);
	printf("dst_____ %s\n", argv[1]);
	argv[0] = NULL;
	argv[0] = ft_memccpy(argv[3], argv[2],'5', 5);
	printf("return__ %s\n", argv[0]);
	printf("dst_____ %s\n", argv[3]);
	return 0;
}

