#include <stdio.h>
#include <string.h>
#include "ft_memcmp.c"

int main(int argc, char *argv[])
{
    int arr1[] = {1, 2, 3};
    int arr2[] = {2, 2, 4, 3};
    if (ft_memcmp(arr1, arr2, 2 * sizeof(int)) == 0)
    {
        printf("Arrays are the same\n");
    }
    else
    {
        printf("Arrays are not the same\n");
    }
    return(0);
}
