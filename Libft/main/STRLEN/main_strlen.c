/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 12:26:34 by cjosue            #+#    #+#             */
/*   Updated: 2019/09/05 12:53:06 by cjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	int lenght;

	lenght = argc;
	lenght = ft_strlen(argv[1]);
	printf("ft_  %d\n", lenght);
	lenght = strlen(argv[1]);
	printf("libc %d\n", lenght);
	return (0);
}
