/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 10:11:14 by cjosue            #+#    #+#             */
/*   Updated: 2019/10/03 10:11:19 by cjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <fcntl.h>
# include <unistd.h>
# include "libft.h"

typedef struct			s_figure
{
	unsigned char		id;
	unsigned short		width;
	unsigned short		height;
	unsigned short		x;
	unsigned short		y;
	unsigned long int	position;
}						t_figure;

int						ft_read_file(int fd, t_figure *list);
int						ft_filling(unsigned short *map, t_figure *list, \
									int num);

#endif
