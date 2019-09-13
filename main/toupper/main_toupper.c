/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 18:55:50 by cjosue            #+#    #+#             */
/*   Updated: 2019/09/07 20:19:13 by cjosue           ###   ########.fr       */
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
	char	ss;
	char	sss;

	argc = 0;
	s = toupper(argv[1][0]);
	ss = s;
	printf("%c\n", ss);
	s2 = ft_toupper(argv[1][0]);
	sss = s2;
	printf("%c\n", sss);
	return (0);
}
