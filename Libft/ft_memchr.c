/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 17:38:04 by cjosue            #+#    #+#             */
/*   Updated: 2019/09/08 18:03:07 by cjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void const *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i != n)
	{
		if (((const unsigned char *)s)[i] == c)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
