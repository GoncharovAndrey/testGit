/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 18:55:50 by cjosue            #+#    #+#             */
/*   Updated: 2019/09/07 16:36:15 by cjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int		main(int argc, char **argv)
{
	char    *s;
	char	*s2;
//	char	*s3;

//	s3 = NULL;
	argc = 0;
	s = strnstr(argv[1], argv[2], 10);
	printf("%s\n", s);
	s2 = ft_strnstr(argv[1], argv[2], 10);
	printf("%s\n", s2);
	return (0);
}
