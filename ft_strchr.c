/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutarbu <rbutarbu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 09:03:16 by rbutarbu          #+#    #+#             */
/*   Updated: 2022/07/10 09:41:23 by rbutarbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    int i;

    if(!s)
        return (NULL);
    i = 0;
    while (s[i])
    {
        if(s[i] == (char)c)
            return ((char*)(s + i));
        i++;
    }
    if (s[i] == (char)c)
        return ((char*)(s + i));
    return (NULL);
}