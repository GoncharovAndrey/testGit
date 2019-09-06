/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 19:02:26 by cjosue            #+#    #+#             */
/*   Updated: 2019/09/06 20:20:06 by cjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *s, int c_in)
{
	char	*str;
	size_t	index;

	index = 0;
	str = s;
	while (s[index] != c_in && s[index] != '\0')
	{
		str++;
		index++;
	}
	if (str[index - 1] != c_in)
		return (NULL);
	return (str);
}
