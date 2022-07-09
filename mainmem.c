#include <stdio.h>
#include <string.h>
#include "ft_memcmp.c"
#include "ft_memcpy.c"
#include "ft_memset.c"
#include "ft_memchar.c"
#include "ft_bzero.c"

int main(int argc, char *argv[])
{
    int arr1[] = {1, 2, 3};
    int arr2[] = {0, 6, 7, 8};


    if(memchr(arr1, 3, sizeof(int) * 2) != NULL)
    {
        printf("ada\n");
    }
    else
    {
        printf("ga ada\n");
    }

    if (ft_memcmp(arr1, arr2, 2 * sizeof(int)) == 0)
    {
        printf("Arrays are the same\n");
    }
    else
    {
        printf("Arrays are not the same\n");
    }

    ft_memcpy(arr1, arr2, sizeof(int));
    printf("%d %d %d\n\n", arr1[0], arr1[1], arr1[2]);

    //ft_memset(arr1, 1, 3 * sizeof(int));
    //printf("%d %d %d\n", arr1[0], arr1[1], arr1[2]);


    ft_bzero(arr1, 1 * sizeof(int));
    printf("after bzero : %d %d %d\n\n", arr1[0], arr1[1], arr1[2]);
    return 0;
}
