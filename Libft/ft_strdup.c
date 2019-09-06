/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 14:13:52 by cjosue            #+#    #+#             */
/*   Updated: 2019/09/05 20:54:21 by cjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*result;
	size_t	lenght;

	if (!str)
		return (0);
	else
	{
		lenght = ft_strlen(str);
		result = (char*)malloc(sizeof(char) * (lenght + 1));
		lenght = 0;
		while (str[lenght])
		{
			result[lenght] = str[lenght];
			lenght++;
		}
		return (result);
	}
}