/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutarbu <rbutarbu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 16:42:13 by rubutar           #+#    #+#             */
/*   Updated: 2022/08/07 14:07:41 by rbutarbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"

int	min(int a, int b) {
	return ((a < b) ? a : b);
}

int	max(int a, int b) {
	return ((a > b) ? a : b);
}

char strupper_and_one(unsigned int id, char c) {
	if (id == 0) {
		return ('1');
	}
	return (ft_toupper(c));
    }

void striterifunc(unsigned int ids, char * st) {
    printf("%s, %d", st, ids);
    }
    // if (id == 0) {
	// 	return ('1');
	// }
	// return (ft_toupper(st[1]));
    // }

int main(int argc, char const *argv[])
{
	(void) argc;
	(void) argv;

printf("______________________________________________________________________________________________\n");

printf("_____________________________________Part 1 - Libc Function___________________________________\n");

printf("______________________________________________________________________________________________\n");


    printf("\n\n=====***** Part 1 - isalpha, isdigit, isalnum, isascii, isprint =====*****\n");
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
    printf("=====***** Part 1 - isalpha, isdigit, isalnum, isascii, isprint =====*****\n\n\n");
    
    printf("\n\n=====***** Part 1 - strlen, memset, bzero, memcpy, memmove =====*****\n");
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

    printf("=====***** Part 1 - strlen, memset, bzero, memcpy, memmove =====*****\n\n\n");


    printf("\n\n=====***** Part 1 - strlcpy, strlcat, toupper, tolower =====*****\n");
    
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
    printf("=====***** Part 1 - strlcpy, strlcat, toupper, tolower =====*****\n\n\n");


    printf("\n\n=====***** Part 1 - strchr, strrchr, strncmp, memchr =====*****\n");

    char *thestr = "ABCDECDE";
    char look = 'C';
    char *cmp1 = "RD2D";
    char *cmp2 = "RD6C";
    char *cmp5;
    int cmp3 = 2;
    int cmp4 = ft_strncmp(cmp1, cmp2, cmp3);
    cmp5 = (cmp4 == 0) ? "SAME" : "NOT SAME";

    printf(">> ft_strchr | %s | from char %c is | %s | \n", thestr, look, ft_strchr(thestr, look));
    printf(">> ft_strrchr | %s| from char %c is | %s |\n", thestr, look, ft_strrchr(thestr, look));
    printf(">> ft_strncmp | %s | and | %s | in | %d | byte is %s\n", cmp1, cmp2, cmp3, cmp5);

    char dest3[] = "abcdeeef";
    int c3 = 'c';
    int d3 = 1;
    printf(">> ft_memchr : dest3 = %s || lookin for char |%c| in %d bit\n", dest3, c3, d3);
    char *ret = ft_memchr(dest3, c3, d3);
	printf("ret = %s\n", ret);
    
    printf("=====***** Part 1 - strchr, strrchr, strncmp, memchr =====*****\n\n\n");
 
    printf("\n\n=====***** Part 1 - memcmp, strnstr, atoi =====*****\n");

    char dest4[] = "abcdeeef";
    char src4[] = "abcdff";
    int c4 = 4;
    
    printf(">> ft_memcmp : ");
    if ((ft_memcmp(dest4, src4, c4)) == 0)
    {
        printf("string = %s || IS SAME compared to |%s| in %d byte\n", dest4, src4, c4);
    }
    else
    {
        printf("string = %s || NOT SAME compared to |%s| in %d byte\n", dest4, src4, c4);
    }   

    char *needle = "come";
    char *haystack = "la da\ndoo a da\nnow here comes the stack\nok there it was.\n";
    size_t c5 = ft_strlen(haystack);

    printf(">> ft_strnstr : ");
    printf("%sfound: searching | %s | in | %s | \n", ft_strnstr(haystack, needle, c5) ? "yes " : "no ", needle, haystack);


    char *mystr = " -6996652";
    int myint = ft_atoi(mystr);
    printf(">> ft_atoi : string |%s| converted to int : %d\n", mystr, myint);
    

    printf("=====***** Part 1 - memcmp, strnstr, atoi =====*****\n\n\n");

    printf("\n\n=====***** Part 1 - calloc, strdup =====*****\n");
    
    char	*str_calloc = NULL;
	length = 0;
    char *str = "onetwo";
	int i = 0;
	length = (strlen(str) + 1);
	str_calloc = (char*)ft_calloc(length, sizeof(*str_calloc));

	if (str_calloc)
	{
		int j = 0;
		while (j < length)
			if (str_calloc[j++])
				break ;
			if (j == length)
				printf("\n>>ft_calloc : yes, memory already allocated same with the length of string\n");
			else
				printf("[content:%s:%d/%d]", str, j, length);
			free(str_calloc);
	}
		else
			printf("[malloc:%s:%d]", str, length);
		str_calloc = NULL;
		i++;


    char *src6;
    src6 = "these words will be duplicated";
    printf(">>ft_strdup : src6 = %s || dest6 = %s\n", src6, ft_strdup(src6));


    printf("=====***** Part 1 - calloc, strdup =====*****\n\n\n");


printf("______________________________________________________________________________________________\n");
printf("________________________________Part 2 - Additional Functions_________________________________\n");
printf("______________________________________________________________________________________________\n");


    printf("\n\n=====***** Part 2 - substr, strjoin, strtrim =====*****\n");
    char * strku = "thisisstring";
    char * strku2 = "anotherstring";
    char * trim = "aing";
    int int1 = 3;
    int int2 = 4;

    printf(">> ft_substr : \"%s\" from %d in %d byte is : | %s |\n", strku, int2, int2, ft_substr(strku, int1, int2));
    printf(">> ft_strjoin : join \"%s\" and \"%s\" will be : \"%s\"\n", strku, strku2, ft_strjoin(strku, strku2));
    printf(">> ft_strtrim : trim \"%s\" in \"%s\" will be : \"%s\"\n", strku, trim, ft_strtrim(strku, trim));

    printf("=====***** Part 2 -  substr, strjoin, strtrim =====*****\n\n\n");

    printf("\n\n=====***** Part 2 - split, itoa =====*****\n");

    const char *spl = "123456";
    char splchr = '3';
    printf(">> ft_split : when you try to split |%s| by char |%c|\n", spl, splchr);
	char * * tab = ft_split(spl, splchr);
	printf("result is %s and %s\n", tab[0], tab[1]);

    int n = -122625;
    char *nstr = ft_itoa(n);
    printf(">> ft_itoa : string of |%d| is |%s| \n", n, nstr);

    printf("=====***** Part 2 -  split, itoa =====*****\n\n\n");


    printf("\n\n=====***** Part 2 - strmapi, striteri =====*****\n");

    char *str_mapi_ft = NULL;

	str_mapi_ft = ft_strmapi ("abcd", &strupper_and_one);
    printf("%s", str_mapi_ft);

    // char *str_iteri_ft = NULL;

	// str_iteri_ft = ft_striteri ("abcd", (*striterifunc)(3, "efgh"));
    // printf("%s", str_iteri_ft);

    printf("\n");
    printf("=====***** Part 2 -  strmapi, striteri =====*****\n\n\n");


    printf("\n\n=====***** Part 2 - putchar_fd, putstr_fd, putendl_fd, ft_putnbr_fd =====*****\n");

    ft_putstr_fd(">>ft_putchar ==> ", 1);
    ft_putchar_fd('z', 1);
    ft_putstr_fd("\n>>ft_putstr ==> ", 1);
    ft_putstr_fd("hey there, it's me", 1);
    ft_putstr_fd("\n>>ft_putstr ==> ", 1);
	ft_putendl_fd("abcdef", 1);
    ft_putstr_fd("\n>>ft_putnbr ==> ", 1);
    ft_putnbr_fd(-2147483648, 1);
    ft_putchar_fd('\n', 1);

    printf("=====***** Part 2 -  putchar_fd, putstr_fd, putendl_fd, ft_putnbr_fd =====*****\n\n\n");

}