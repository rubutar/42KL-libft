/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutarbu <rbutarbu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 16:42:13 by rubutar           #+#    #+#             */
/*   Updated: 2022/07/31 09:57:29 by rbutarbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>


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

    printf("%d\n", ft_strncmp("R2DS", "R2CT", 3));
    printf("%d\n", strncmp("R2DS", "R2CT", 2));
    printf("%s\n", ft_substr("stringku", 2, 3));
    printf("%zu\n", ft_strlen("stringku"));
    printf("%s\n", ft_strjoin("stringku", "aja"));



    // /*
	// memchr
	// */
	// printf("\n---memchr---[string|memchr|yours]\n");

	// i = 0;
	// while (i < argc) {
	// 	if (memchr(argv[i], 'c', 50) == ft_memchr(argv[i], 'c', 50)) {
	// 		printf("G");
	// 	} else {
	// 		printf("[%s|%p|%p]", argv[i], memchr(argv[i], 'c', 50), ft_memchr(argv[i], 'c', 50));
	// 	}
	// 	i++;
	// }
	// printf("\n");



    // printf("%d\n", ft_memchar("R2DSaaaaaa", 'D', 4));
    // printf("%d\n", memchr("R2DSaaaaaa", 'D', 4));


    
    

    //ft_strcat.c("mau", "apa");
    
    // ft_putnbr(-214);
    // ft_putnbr_fd(-4244, 1);
    //printf("length of string =akumau= is %d", ft_strlen("akumau"));
}