/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 15:45:14 by cjosue            #+#    #+#             */
/*   Updated: 2019/09/11 20:36:12 by cjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		ft_words(char const *s, char c)
{
	size_t	k;
	size_t	i;

	i = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
		{
			k++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (k);
}

static void			ft_fill(char **str, char const *s, char c)
{
	size_t	h;
	size_t	i;
	size_t	j;
	size_t	l;

	i = 0;
	h = 0;
	while (s[i])
	{
		l = 0;
		while (s[i] == c && s[i])
			i++;
		j = i;
		while (s[i] != c && s[i])
			i++;
		str[h] = ft_strnew(i - j);
		while (j < i)
			str[h][l++] = s[j++];
		h++;
	}
}

char				**ft_strsplit(char const *s, char c)
{
	char	**str;
	size_t	k;

	if (!s)
		return (NULL);
	k = ft_words(s, c);
	if (!(str = (char**)malloc(sizeof(char *) * k)))
		return (0);
	ft_fill(str, s, c);
	return (str);
}
