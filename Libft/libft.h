/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 14:54:43 by cjosue            #+#    #+#             */
/*   Updated: 2019/09/08 14:46:20 by cjosue           ###   ########.fr       */
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
char    *ft_strnstr(char *s_1, char *s_2, size_t n);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_atoi(const char	*numstr);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
void	*ft_memset(void *dst, int c, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t len);
void	*ft_memccpy(void *sdt, const void *src, int c, size_t n);

#endif
