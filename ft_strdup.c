/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutarbu <rbutarbu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 22:27:59 by rbutarbu          #+#    #+#             */
/*   Updated: 2022/07/10 09:02:55 by rbutarbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_strlen.c"

char    *ft_strdup(const char *dst)
{
    size_t i;
    char    *src;

    if (!dst)
        return (NULL);
    src = (char*)malloc(sizeof(*dst) * (ft_strlen(dst) + 1));
    if (!src)
        return (NULL);
    i = 0;
    while (dst[i])
    {
        src[i] = dst[i];
        i++; 
    }
    src[i] = 0;
    return (src);
}