/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 20:42:13 by cjosue            #+#    #+#             */
/*   Updated: 2019/09/06 21:25:25 by cjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *str_1, char *str_2)
{
	size_t	i;
	size_t	k;
	size_t	l;

	i = 0;
	l = ft_strlen(str_2);
	if (str_2[0] == '\0')
		return (str_1);
	while (str_1[i])
	{
		k = 0;
		if (str_1[i] == str_2[k])
		{
			while (str_1[i + k] == str_2[k] && str_1[i + k] && str_2[k])
				k++;
			if (k == l)
				return (str_1 + i);
		}
		i++;
	}
	return (NULL);
}
