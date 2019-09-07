/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 16:08:04 by cjosue            #+#    #+#             */
/*   Updated: 2019/09/07 16:39:58 by cjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *s_1, char *s_2, size_t n)
{
	size_t	i;
	size_t	k;
	size_t	l;

	i = 0;
	l = ft_strlen(s_2);
	if (s_2[0] == '\0')
		return (s_1);
	while (s_1[i] && i != n)
	{
		k = 0;
		if (s_1[i] == s_2[k])
		{
			while (s_1[i + k] == s_2[k] && s_1[i + k] \
					&& s_2[k] && (i + k) != n)
				k++;
			if (k == l)
				return (s_1 + i);
		}
		i++;
	}
	return (NULL);
}
