/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutarbu <rbutarbu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 16:42:13 by rubutar           #+#    #+#             */
/*   Updated: 2022/08/02 22:36:09 by rbutarbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include "libft.h"

int	min(int a, int b) {
	return ((a < b) ? a : b);
}

int	max(int a, int b) {
	return ((a > b) ? a : b);
}



int main(int argc, char const *argv[])
{
	(void) argc;
	(void) argv;

    printf("isalpha = %d\n", ft_isalpha('A'));
    printf("isascii = %d\n", ft_isascii(127));
    printf("isalnum = %d\n", ft_isdigit(48));
    printf("isdigit = %d\n", ft_isdigit(48));
    printf("isprint = %d\n", ft_isprint(126));

    printf("toupper = %c\n", ft_toupper('a'));
    printf("tolower = %c\n", ft_tolower('A'));

    // printf("memset = %p\n", ft_memset("buku", 'A', 2));

 
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
    printf("%s\n", ft_strtrim("aku mau apa aja", "aja"));

    char stratoi[] = "    -58852 4";
    printf("\n ++atoi++ dari %s adalah %d\n", stratoi, ft_atoi(stratoi));

    char b[] = "apadah";
    char *ptrmemset = NULL;
    ptrmemset = ft_memset(b, 'c', 3);
    printf("ft_memset dari %s adalah %s\n ", b, ptrmemset);
    
	/*
	bzero
	*/
	printf("\n---bzero---[string|length]\n");

	char *str_bzero_org = NULL;
	char *str_bzero_ft = NULL;
	int	min_length;

	int i = 0;
	while (i < argc) {
		str_bzero_org = strdup(argv[i]);
		str_bzero_ft = strdup(argv[i]);
		min_length = min(strlen(argv[i]), 5);
		bzero(str_bzero_org, min_length);
		ft_bzero((void*)str_bzero_ft, min_length);
		if (memcmp(str_bzero_org, str_bzero_ft, min_length) == 0)
			printf("G");
		else
			printf("[%s|%d]", argv[i], min_length);
		free(str_bzero_org);
		free(str_bzero_ft);
		i++;
	}
	printf("\n");

    
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
