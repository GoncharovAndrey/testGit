/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memdel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 16:54:24 by cjosue            #+#    #+#             */
/*   Updated: 2019/09/09 18:05:47 by cjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main()
{
    void     **arr;
    int     k;
    int     j;

    k = 0;
    j = 0;
    arr = (void **)malloc(10);
    while (k < 10)
    {
        j = 0;
        arr[k] = (void *)malloc(10);
        while (j < 10)
        {
            ((unsigned char **)arr)[k][j] = '1';
            j++;
        }
        k++;
    }
    printf("%c\n", ((unsigned char **)arr)[1][1]);
    ft_memdel(arr);
//    if (!arr[1][1])
//        printf("OK");
    return (0);
}

