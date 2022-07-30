/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutarbu <rbutarbu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 16:42:13 by rubutar           #+#    #+#             */
/*   Updated: 2022/07/30 12:19:44 by rbutarbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>



int main()
{
    printf("isalpha = %d\n", ft_isalpha('A'));
    printf("isascii = %d\n", ft_isascii(127));
    printf("isdigit = %d\n", ft_isdigit(48));
    printf("isprint = %d\n", ft_isprint(126));

 
    ft_putchar_fd('r', 1);
    ft_putstr_fd("\n hey there, it's me\n", 1);
    ft_putnbr_fd(-2147483648, 1);
    ft_putchar_fd('\n', 1);

    printf("%s\n", ft_strchr("ABCDE", 'C'));
    printf("%s\n", ft_strrchr("ABCDE", 'C'));
    

    //ft_strcat.c("mau", "apa");
    
    // ft_putnbr(-214);
    // ft_putnbr_fd(-4244, 1);
    //printf("length of string =akumau= is %d", ft_strlen("akumau"));
}