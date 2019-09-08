/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 13:44:23 by cjosue            #+#    #+#             */
/*   Updated: 2019/09/08 18:39:35 by cjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int		main(int argc, char **argv)
{
	argc = memcmp(argv[1], argv[2], 7);
	printf("%d\n", argc);
//	printf("%d\n", argc);
//	argv[0] = NULL;
	argc = ft_memcmp(argv[1], argv[2], 7);
	printf("%d\n", argc);
//	printf("%s\n", argv[3]);
	return 0;
}

