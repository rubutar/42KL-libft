/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutarbu <rbutarbu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 16:42:13 by rubutar           #+#    #+#             */
/*   Updated: 2022/07/03 13:18:04 by rbutarbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main()
{
    ft_putchar_fd('r', 1);
    ft_putchar('u');
    ft_putstr("butar ");
    ft_putstr_fd("hey there, it's me\n", 1);
    ft_putnbr(-2147483648);
    ft_putnbr(-214);
    ft_putnbr_fd(-4244, 1);
    //printf("length of string =akumau= is %d", ft_strlen("akumau"));
}