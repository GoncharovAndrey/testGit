/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 18:55:50 by cjosue            #+#    #+#             */
/*   Updated: 2019/09/06 20:17:24 by cjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int		main(int argc, char **argv)
{
	char    *s;
	char	*s2;

	argc = 0;
	s = strrchr(argv[1], argv[2][0]);
	printf("%s\n", s);
	s2 = ft_strrchr(argv[1], argv[2][0]);
	printf("%s\n", s2);
	return (0);
}
