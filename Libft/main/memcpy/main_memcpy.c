/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 13:44:23 by cjosue            #+#    #+#             */
/*   Updated: 2019/09/08 13:38:44 by cjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int		main(int argc, char **argv)
{
	argc = 0;
	argv[0] = memcpy(argv[1], argv[2], 5);
	printf("%s\n", argv[0]);
	argv[0] = NULL;
	argv[0] = ft_memcpy(argv[1], argv[3], 5);
	printf("%s\n", argv[0]);
	return 0;
}

