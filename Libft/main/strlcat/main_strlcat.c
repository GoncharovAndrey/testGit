/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlcat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 18:55:52 by cjosue            #+#    #+#             */
/*   Updated: 2019/09/06 15:53:29 by cjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int		main(void)
{
	char	dst[20] = "9876543210";
	char	str[20] = "1234567890";
	char    dst_2[20] = "9876543210";
	char    str_2[20] = "1234567890";
	size_t	i;
	size_t  k;

//	dst = (char*)malloc(sizeof(char) * 20);
//	dst_2 = (char*)malloc(sizeof(char) * 20);
//	dst[0] = '7';
//	dst[1] = '7';
//	dst[2] = '7';
//	dst_2[0] = '7';
//	dst_2[1] = '7';
//	dst_2[2] = '7';
	i = strlcat(dst,str,20);
	printf("libc_ %s\n", dst);
	printf("i _ %zu\n", i);
	k = ft_strlcat(dst_2,str_2,20);
	printf("ft___ %s\n", dst_2);
	printf("k _ %zu\n", k);
	return (0);
}
