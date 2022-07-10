/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutarbu <rbutarbu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 19:31:45 by rbutarbu          #+#    #+#             */
/*   Updated: 2022/07/09 22:24:36 by rbutarbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    size_t    i;
    unsigned char    *buff;
    const unsigned char *buff2;

    buff = (unsigned char*)dst;
    buff2 = (unsigned char*)src;
    i   = 0;

    if (!buff && !buff2)
        return (NULL);
    
    if (buff2 < buff)
        while (i <= len)
        {
            buff[len - i] = buff2[len - i];
            i++;
        }
    else
        while (len > 0)
        {
            *(buff++) = *(buff2++);
            len--;
        }
    return (dst);
}