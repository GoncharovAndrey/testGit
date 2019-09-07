/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 18:27:03 by cjosue            #+#    #+#             */
/*   Updated: 2019/09/07 18:51:38 by cjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *numstr)
{
	size_t		i;
	long int	res;
	int			z;

	res = 0;
	i = 0;
	z = 1;
	while ((numstr[i] >= 9 && numstr[i] <= 13) || numstr[i] == 32)
		i++;
	if (numstr[i] == '-')
	{
		i++;
		z = -1;
	}
	if (numstr[i] == '+')
		i++;
	while (numstr[i] >= '0' && numstr[i] <= '9')
	{
		res = res * 10 + (numstr[i] - '0');
		i++;
	}
	return (res * z);
}
