/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 14:54:43 by cjosue            #+#    #+#             */
/*   Updated: 2019/09/06 21:10:20 by cjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>

size_t  ft_strlen(const char *str);
char    *ft_strdup(const char *str);
char	*ft_strcpy(char	*dst, const char *src);
char	*ft_strncpy(char *s1, const char *s2, size_t n);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strncat(char *s1, const char *s2, size_t n);
//size_t	ft_strlcat(char *s1, char *s2, size_t n);
char	*ft_strchr(char *s, int c);
char	*ft_strrchr(char *s, int c);
char	*ft_strstr(char *str_1, char *str_2);

#endif
