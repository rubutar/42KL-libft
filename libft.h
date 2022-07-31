/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutarbu <rbutarbu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 21:29:47 by rubutar           #+#    #+#             */
/*   Updated: 2022/07/31 09:56:54 by rbutarbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdlib.h>

//int     ft_atoi(const char *str);

int     ft_isalpha(int c);
int     ft_isascii(int c);
int     ft_isdigit(int c);
int     ft_isprint(int c);
char    *ft_strchr(const char *s, int c);
char    *ft_strjoin(char const *s1, char const *s2);
size_t  ft_strlen(const char *s);
int     ft_strncmp(const char *s1, const char *s2, size_t n);
char    *ft_strrchr(const char *s, int c);
char    *ft_substr(char const *s, unsigned int start, size_t len);
void    ft_putchar_fd(char c, int fd);
void    ft_putnbr_fd(int n, int fd);
void    ft_putstr_fd(char const *s, int fd);
// void    *ft_memchr(const void *s, int c, size_t n);


//char    *ft_strcat(char *dest, char *src);

// size_t     ft_strlen(const char *s);
// 
// int     ft_isdigit(int c);
// int     ft_isalnum(int c);
// int     ft_isascii(int c);
// int     ft_isprint(int c);
// int     ft_toupper(int c);
// int     ft_tolower(int c);
// size_t     ft_strlcpy(char *dst, const char *src, size_t size);

#endif