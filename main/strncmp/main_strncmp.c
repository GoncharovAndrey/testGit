/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 18:55:50 by cjosue            #+#    #+#             */
/*   Updated: 2019/09/07 17:33:12 by cjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int		main(int argc, char **argv)
{
	int		s;
	int		s2;
//	char	*s3;

//	s3 = NULL;
	argc = 0;
	s = strncmp(argv[1], argv[2], 5);
	printf("%d\n", s);
	s2 = ft_strncmp(argv[1], argv[2], 5);
	printf("%d\n", s2);
	return (0);
}
