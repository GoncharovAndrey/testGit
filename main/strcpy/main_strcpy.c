/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 18:55:52 by cjosue            #+#    #+#             */
/*   Updated: 2019/09/05 19:31:50 by cjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

int		main(int argc, char **argv)
{
	char	*dst;
	char	*str;
	char    *dst_2;
	char    *str_2;

	argc = 1;
	dst = argv[1];
	str = argv[2];
	strcpy(dst,str);
	printf("libc_ %s\n", dst);
	printf("%c\n", dst[2]);
	dst_2 = argv[3];
	str_2 = argv[4];
	ft_strcpy(dst_2,str_2);
	printf("ft___ %s\n", dst_2);
	printf("%c\n", dst_2[2]);
	return (0);
}
