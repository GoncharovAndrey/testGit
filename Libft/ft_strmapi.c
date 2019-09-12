/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 20:35:02 by cjosue            #+#    #+#             */
/*   Updated: 2019/09/12 17:30:40 by cjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*res;

	if (s == NULL || f == NULL)
		return (NULL);
	i = ft_strlen(s);
	res = (char *)malloc(i);
	i = 0;
	while (s[i])
	{
		res[i] = f(s[i], i);
		i++;
	}
	return (res);
}
