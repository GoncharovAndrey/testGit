/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 14:35:25 by cjosue            #+#    #+#             */
/*   Updated: 2019/09/05 18:38:41 by cjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <libft.h>

int		main(void)
{
	char	*proverka;
	char	*proverka_2;

	proverka = NULL;
//	proverka = ft_strdup(argv[1]);
	proverka_2 = ft_strdup(proverka);
//	printf("ft___ %s\n", proverka);
	printf("libc_ %s\n", proverka_2);
	return (0);
}
