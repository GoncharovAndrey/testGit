/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 14:23:20 by cjosue            #+#    #+#             */
/*   Updated: 2019/09/06 15:48:36 by cjosue           ###   ########.fr       */
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
	if (l_1 > size)
		return (l_2 + size);
	res = l_1 + l_2;
	size = size - l_1;
	l_2 = 0;
	while (sizeof(dst[l_1]) == 1 && src[l_2] != '\0' && size != l_2)
	{
		dst[l_1] = src[l_2];
		l_1++;
		l_2++;
	}
	if (sizeof(dst[l_1] == 1))
		dst[l_1] = '\0';
	else	
		dst[l_1 - 1] = '\0';
	if (res == l_1 )
		return (res + 2);
	return (res);
}
