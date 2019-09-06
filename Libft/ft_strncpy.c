/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 20:49:10 by cjosue            #+#    #+#             */
/*   Updated: 2019/09/05 20:53:43 by cjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *s1, const char *s2, size_t n)
{
	size_t	lenght;

	lenght = ft_strlen(s2);
	if (lenght < n)
	{
		while (lenght != n)
			s1[lenght++] = '\0';
		lenght = 0;
		while (s2[lenght])
		{
			s1[lenght] = s2[lenght];
			lenght++;
		}
	}
	else
	{
		lenght = 0;
		while (lenght != n)
		{
			s1[lenght] = s2[lenght];
			lenght++;
		}
	}
	return (s1);
}
