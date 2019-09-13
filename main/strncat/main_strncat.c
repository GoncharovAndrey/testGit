/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strcat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 18:55:52 by cjosue            #+#    #+#             */
/*   Updated: 2019/09/06 13:10:07 by cjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

int		main(void)
{
	char	dst[10] = "1111";
	char	str[10] = "2222";
	char    dst_2[10] = "1111";
	char    str_2[10] = "2222";

	strncat(dst,str,10);
	printf("libc_ %s\n", dst);
//	printf("n _ %c\n", dst[2]);
	ft_strncat(dst_2,str_2,10);
	printf("ft___ %s\n", dst_2);
//	printf("%c\n", dst_2[3]);
	return (0);
}
