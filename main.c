#include <string.h>
#include "ft_strlen.c"
#include "ft_strncpy.c"
#include "ft_strcat.c"
#include "ft_isalpha.c"
#include "ft_isdigit.c"
#include "ft_isalnum.c"
#include "ft_isascii.c"
#include "ft_isprint.c"
#include "ft_toupper.c"
#include "ft_tolower.c"
#include "ft_strlcpy.c"

int main()
{
    char x[] = "saya";
    char y[] = "mau";
    char x1[] = "aku";
    char y1[] = "mau";
    char x2[] = "saya";
    char y2[] = "mau";
    char x3[] = "saya ";
    char y3[] = "mau";
    char x4[100] = "saya ";
    char y4[100] = "mau";

    printf("ft_strlen of =akumau= is %lu \n", ft_strlen("akumau"));
    printf("strlen of =akumau= is %lu \n\n", strlen("akumau"));

    printf("ft_strlcpy of x is %lu \n", ft_strlcpy(x, y, 3));
    printf("strlcpy of x1 is %lu \n\n", strlcpy(x1, y1, 3));

    printf("ft_strncpy of x2 is %s \n", ft_strncpy(x2, y2, 2));
    printf("strncpy of x3 is %s\n\n", strncpy(x3, y3, 2));

    printf("ft_strcat of x4 is %s \n", ft_strcat(x3, y3));
    printf("strcat of x4 is %s\n\n", strcat(x4, y4));

    printf("102 isalpha : %d \n", ft_isalpha(102));
    printf("50 isdigit : %d \n", ft_isdigit(50));
    printf("50 isalnum : %d \n", ft_isalnum(50));
    printf("50 isascii : %d \n", ft_isascii(50));
    printf("50 isprint : %d \n", ft_isascii('d'));
    printf("toupper : %c \n", ft_toupper('a'));
    printf("toupper : %c \n", ft_toupper('A'));
    printf("tolower : %c \n", ft_tolower('A'));
}