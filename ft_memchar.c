/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutarbu <rbutarbu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 20:29:50 by rbutarbu          #+#    #+#             */
/*   Updated: 2022/07/30 10:41:20 by rbutarbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_memchar(const void *s, int c, size_t n)
{
    size_t  i;

    if(!s)
        return(NULL);
    i = 0;
    while (i < n)
    {
        if(*(unsigned char*)(s + i) == (unsigned char)c)
            return ((void*)(s + i));
        i++;
    }
    return (NULL);
}