/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 18:55:50 by cjosue            #+#    #+#             */
/*   Updated: 2019/09/07 19:21:59 by cjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"
#include <ctype.h>

int		main(int argc, char **argv)
{
	int		s;
	int		s2;

	argc = 0;
	s = isdigit(argv[1][0]);
	printf("%d\n", s);
	s2 = ft_isdigit(argv[1][0]);
	printf("%d\n", s2);
	return (0);
}
