/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutarbu <rbutarbu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 21:29:47 by rubutar           #+#    #+#             */
/*   Updated: 2022/07/03 14:11:48 by rbutarbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdio.h>

void    ft_putchar_fd(char c, int fd);
void    ft_putstr_fd(char const *s, int fd);
void    ft_putnbr_fd(int n, int fd);
void    ft_putchar(char c);
void    ft_putstr(char const *s);
void    ft_putnbr(int n);
size_t     ft_strlen(const char *s);

#endif