/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strnew.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 19:01:48 by cjosue            #+#    #+#             */
/*   Updated: 2019/09/09 19:01:50 by cjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int     main()
{
    char    *arr;

    arr = ft_itoa(-123);
	printf("%s\n", arr);
//	printf("%s\n", arr[0]);
//	printf("%s\n", arr[1]);
//	printf("%s\n", arr[2]);
    return (0);
}

