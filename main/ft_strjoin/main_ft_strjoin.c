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

int     main(int argc, char **argv)
{
    char    *arr;

    argc = 0;
//  argv[1] = NULL;
    arr = ft_strjoin(argv[1], "dfdv");
    printf("%s", arr);
    return (0);
}