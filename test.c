/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutarbu <rbutarbu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 16:42:13 by rubutar           #+#    #+#             */
/*   Updated: 2022/08/06 17:49:40 by rbutarbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	min(int a, int b) {
	return ((a < b) ? a : b);
}

int	max(int a, int b) {
	return ((a > b) ? a : b);
}

char strupper_and_one(unsigned int idx, char c) {
	if (idx == 0) {
		return ('1');
	}
	return (ft_toupper(c));
    }


int main(int argc, char const *argv[])
{
	(void) argc;
	(void) argv;

printf("______________________________________________________________________________________________\n");

printf("_____________________________________Part 1 - Libc Function___________________________________\n");

printf("______________________________________________________________________________________________\n");


    printf("\n\n=====***** ft_atoi *****=========================\n");
	char *mystr = " -6996652";
    int myint = ft_atoi(mystr);
    printf("string |%s| converted to int : %d", mystr, myint);
    printf("\n=====***** ft_atoi *****=========================\n\n\n");

    printf("\n\n=====***** isalpha, isdigit, isalnum, isascii, isprint =====*****\n");
    char alpha = 'A';
    char ascii = 127;
    char alnum = 48;
    char digit = 48;
    char print = 126;
    printf("is |%c| alpha = %d\n", alpha, ft_isalpha('A'));
    printf("is |%c| ascii = %d\n", ascii, ft_isascii(127));
    printf("is |%c| alnum = %d\n", alnum, ft_isalnum(48));
    printf("is |%c| digit = %d\n", digit, ft_isdigit(48));
    printf("is |%c| print = %d\n", print, ft_isprint(126));
    printf("=====***** isalpha, isdigit, isalnum, isascii, isprint =====*****\n\n\n");
    
    printf("\n\n=====***** strlen, memset, bzero, memcpy, memmove =====*****\n");
    char *mystr2 = "this is the string that will be counted";
    int len = strlen(mystr2);
    printf(">> ft_strlen : length of |%s| is = %d\n", mystr2, len);

    char b[] = "shit happens";
    char c = '*';
    int d = 4;
    printf(">> ft_memset from |%s|, replace char |%c| in %d byte ", b, c, d);
    ft_memset(b, c, d);
    printf("would be |%s|\n ", b);

    char b2[] = "shit happens";
    int d2 = ft_strlen(b2) + 1;
    printf(">> ft_bzero from |%s|, in %d byte ", b2, d2);
    ft_bzero(b2, d2);
    printf("would be |%s|\n ", b2);
    
    char dest[] = "copy";
    char src[] = "here";
    int length = 2;
    printf(">> ft_memcpy dest : | %s |, src : | %s |, len : %d\n ", dest, src, length);
    ft_memcpy(dest, src, length);
    printf("then dest will be : | %s |\n ", dest);
    
    char dest1[] = "copy";
    char src1[] = "here";
    int len1 = 2;
    printf(">>ft_memmove dest1 : | %s |, src1 : | %s |, len1 : %d\n ", dest1, src1, len1);
    ft_memmove(dest1, src1, len1);
    printf("then dest1 will be : | %s |\n ", dest1);

    printf("=====***** strlen, memset, bzero, memcpy, memmove =====*****\n\n\n");


    printf("\n\n=====***** strlcpy, strlcat, toupper, tolower =====*****\n");
    
    char dest2[] = "copy";
    char src2[] = "here";
    int len2 = 3;
    printf(">> ft_strlcpy dest2 : %s, src2 : %s, len2 : %d\n ", dest2, src2, len2);
    ft_strlcpy(dest2, src2, len2);
    printf("then dest2 would be : %s\n ", dest2);

    char dest5[] = "copy";
    char src5[] = "here";
    int len5 = 3;
    printf(">> ft_strlcat dest5 : %s, src5 : %s, len5 : %d\n ", dest5, src5, len5);
    printf("strlcat : %ld \n", ft_strlcat(dest5, src5, len5));
    

    char mylow = 'c';
    char mycap = 'C';
    printf(">> ft_toupper |%c| = %c\n", mylow, ft_toupper(mylow));
    printf(">> ft_tolower |%c| = %c\n", mycap, ft_tolower(mycap));
    printf("=====***** strlcpy, strlcat, toupper, tolower =====*****\n\n\n");


    printf("\n\n=====***** strchr, strrchr, strncmp, memchr =====*****\n");

    printf("=====***** strchr, strrchr, strncmp, memchr =====*****\n\n\n");
 
    printf("\n\n=====***** memchr, memcmp, strnstr, atoi =====*****\n");

    printf("=====***** memchr, memcmp, strnstr, atoi =====*****\n\n\n");



//     ft_putchar_fd('r', 1);
//     ft_putstr_fd("\n hey there, it's me\n", 1);
//     ft_putnbr_fd(-2147483648, 1);
//     ft_putchar_fd('\n', 1);

//     printf("%s\n", ft_strchr("ABCDE", 'C'));
//     printf("%s\n", ft_strrchr("ABCDE", 'C'));

//     printf("%d\n", ft_strncmp("R2DS", "R2CT", 3));
//     printf("%d\n", strncmp("R2DS", "R2CT", 2));
//     printf("%s\n", ft_substr("stringku", 2, 3));
//     printf("%s\n", ft_strjoin("stringku", "aja"));
//     printf("%s\n", ft_strtrim("aku mau apa aja", "aja"));

//     char stratoi[] = "    -58852 4";
//     printf("\n ++atoi++ dari %s adalah %d\n", stratoi, ft_atoi(stratoi));

//     printf("=====***** ft_memchr *****=====\n");
//     char dest3[] = "abcdeeef";
//     int c = 'c';
//     int d = 1;
//     printf("dest3 = %s || lookin for char |%c| in %d bit\n", dest3, c, d);
//     char *ret = ft_memchr(dest3, c, 1);
// 	printf("ret = %s\n", ret);
    
//     printf("=====***** ft_memchr *****=====\n\n\n");

//     printf("=====***** ft_memcmp *****=====\n");
//     char dest4[] = "abcdeeef";
//     char src4[] = "abcdff";
//     int c4 = 5;
    
//     if ((ft_memcmp(dest4, src4, c4)) == 0)
//     {
//         printf("string = %s || IS SAME compared to |%s| in %d bit\n", dest4, src4, c4);
//     }
//     else
//     {
//         printf("string = %s || NOT SAME compared to |%s| in %d bit\n", dest4, src4, c4);
//     }   
//     printf("=====***** ft_memcmp *****=====\n\n\n");



//     printf("=====***** ft_strnstr *****=====\n");
//     char *needle = "came";
//     char *haystack = "la da\ndoo a da\nnow here comes the stack\nok there it was.\n";
//     size_t c5 = ft_strlen(haystack);

//     printf("%sfound: |%s| using strstr\n", strstr(haystack, needle) ? "yes " : "no ", needle);
//     printf("%sfound: |%s| using ft_strnstr\n", ft_strnstr(haystack, needle, c5) ? "yes " : "no ", needle);

//     printf("=====***** ft_strnstr *****=====\n\n\n");


//     printf("=====***** ft_calloc *****=====\n");
    
//     char	*str_calloc = NULL;
// 	int		length = 0;

// 	i = 0;
// 	while (i < argc) {
// 		length = strlen(argv[i]) + 1;
// 		str_calloc = (char*)ft_calloc(length, sizeof(*str_calloc));
// 		if (str_calloc)
// 		{
// 			int j = 0;
// 			while (j < length)
// 				if (str_calloc[j++])
// 					break ;
// 			if (j == length)
// 				printf("\nG\n\n");
// 			else
// 				printf("[content:%s:%d/%d]", argv[i], j, length);
// 			free(str_calloc);
// 		}
// 		else
// 			printf("[malloc:%s:%d]", argv[i], length);
// 		str_calloc = NULL;
// 		i++;
//     }       
//     printf("=====***** ft_calloc *****=====\n\n\n");


//     printf("=====***** ft_strdup *****=====\n");    
//     char *src6;
//     src6 = "this word will be duplicated";
//     printf("src6 = %s || dest6 = %s\n", src6, ft_strdup(src6));
//     printf("=====***** ft_strdup *****=====\n\n\n");



//     printf("\n\n==================================================\n");
//     printf("\n========= Part 2 - Additional Function ===========\n");
//     printf("\n==================================================\n\n\n");



//     printf("=====***** ft_split *****=====\n");
//     const char *spl = "123456";
//     char splchr = '3';
//     printf("when you try to split |%s| by char |%c|\n", spl, splchr);
// 	char * * tab = ft_split(spl, splchr);
// 	printf("result is %s and %s\n", tab[0], tab[1]);
//     printf("=====***** ft_split *****=====\n\n\n");


//     printf("=====***** ft_itoa *****=====\n");
//     int n = -122625;
//     char *nstr = ft_itoa(n);
//     printf("string of |%d| is |%s| \n", n, nstr);
//     printf("=====***** ft_itoa *****=====\n\n\n");





//     printf("=====***** ft_strmapi *****=====\n");

//     char *str_mapi_ft = NULL;
// 	int all_upper;

// 	i = 0;
// 	while (i < argc) {
// 		str_mapi_ft = ft_strmapi(argv[i], &strupper_and_one);
// 		all_upper = 1;
// 		int j = 0;
// 		while (str_mapi_ft[j])
// 		{
// 			if (islower(str_mapi_ft[j++]))
// 			{
// 				all_upper = 0;
// 				break ;
// 			}
// 		}
// 		if ((str_mapi_ft[0] == '1' || strlen(str_mapi_ft) == 0) && all_upper)
// 			// printf("G");
//             printf("[%s|%s] G", argv[i], str_mapi_ft);
// 		else
// 			printf("[%s|%s]", argv[i], str_mapi_ft);
// 		i++;
// 	}
// 	printf("\n");

//     printf("=====***** ft_strmapi *****=====\n\n\n");


//     printf("=====***** ft_strteri *****=====\n");
    
   

    
//     printf("=====***** ft_strteri *****=====\n\n\n");

//     printf("=====***** ft_putendl *****=====\n");
    

// 	ft_putendl_fd("abcdef", 1);
   

    
//     printf("=====***** ft_putendl *****=====\n\n\n");


// printf("________________________________________________________________________________________________________\n");

// printf("_____________________________________________B.O.N.U.S__________________________________________________\n");

// printf("________________________________________________________________________________________________________\n");





}