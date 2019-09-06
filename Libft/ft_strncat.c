/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 12:17:41 by cjosue            #+#    #+#             */
/*   Updated: 2019/09/06 13:45:13 by cjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	index;
	size_t	index_2;

	index = 0;
	while (s2[index] && index != n)
		index++;
	index_2 = strlen(s1);
	n = index + index_2;
	index = 0;
	while (index_2 != n)
	{
		s1[index_2] = s2[index];
		index_2++;
		index++;
	}
	s1[index_2] = '\0';
	return (s1);
}
