/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 13:48:41 by cjosue            #+#    #+#             */
/*   Updated: 2019/09/08 14:45:14 by cjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	void *p;

	p = ft_memchr(src, c, n);
	if(p != NULL)
		return (ft_memcpy(dst, src, p - src +1) + (p - src + 1));
	/*	size_t	i;

	i = 0;
	while (i != n)
	{
		if (((unsigned char *)src)[i] == ((unsigned char)c))
		{
			((unsigned char *)dst)[i] = ((unsigned char)c);
			ft_memcpy(dst, src, i);
			return (dst + i + 1);
		}
		i++;
	}*/
	ft_memcpy(dst, src, n);
	return (NULL);
}
