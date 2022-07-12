/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutarbu <rbutarbu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 08:22:11 by rbutarbu          #+#    #+#             */
/*   Updated: 2022/07/12 08:22:11 by rbutarbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char    *ft_strrchr(const char *str, int c)
{
    int i;

    i = 0;
    // while (str[i])
    //     i++;
    while (i >= 0)
    {
        if(str[i] == (char)(c))
            return ((char*)(str + i));
        i++;
    }
    return (NULL);
}


int main () {
    int len;
    const char str[] = "iniakumauapa";
    const char ch = 'u';
    char *ret;

    ret = strrchr(str, ch);
    printf("String after |%c| is - |%s|\n", ch, ret);
    return(0);


}