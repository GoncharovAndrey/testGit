/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 13:44:23 by cjosue            #+#    #+#             */
/*   Updated: 2019/09/08 18:00:59 by cjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int		main(int argc, char **argv)
{
	argc = 0;
	argv[0] = memchr(argv[1], argv[2][0], 7);
	printf("%s\n", argv[0]);
	printf("%s\n", argv[1]);
	argv[0] = NULL;
	argv[0] = ft_memchr(argv[3], argv[2][0], 7);
	printf("%s\n", argv[0]);
	printf("%s\n", argv[3]);
	return 0;
}

