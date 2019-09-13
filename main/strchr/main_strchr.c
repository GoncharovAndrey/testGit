/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 18:55:50 by cjosue            #+#    #+#             */
/*   Updated: 2019/09/06 20:18:32 by cjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int		main(int argc, char **argv)
{
	char    *s;
//	char	*s2;

	argc = 0;
	s = strchr(argv[1], '\0');
	printf("%s\n", s);
//	s2 = ft_strchr(argv[1], '\0');
//	printf("%s\n", s2);
	return (0);
}
