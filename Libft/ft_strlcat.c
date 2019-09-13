/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 14:23:20 by cjosue            #+#    #+#             */
/*   Updated: 2019/09/08 19:39:56 by cjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t	l_1;
	size_t	l_2;
	size_t	res;

	l_1 = ft_strlen(dst);
	l_2 = ft_strlen(src);
	res = l_1 + l_2;
	if (l_1 >= size)
		return (l_2 + size);
	l_2 = 0;
	while (src[l_2] && l_2 < size - l_1 - 1)
	{
		dst[l_1 + l_2] = src[l_2];
		l_2++;
	}
	dst[l_1 + l_2] = '\0';
	return (res);
}
