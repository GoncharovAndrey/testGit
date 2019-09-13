/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 18:55:50 by cjosue            #+#    #+#             */
/*   Updated: 2019/09/07 18:48:07 by cjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include "libft.h"

int		main()
{
	int		s;
	int		s2;
	char	num[15];

	sprintf(num, "%i", INT_MIN);
	s = atoi(num);
	printf("%d\n", s);
	s2 = ft_atoi(num);
	printf("%d\n", s2);
	if (s == s2)
		printf("OK");
	return (0);
}
