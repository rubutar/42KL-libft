/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutarbu <rbutarbu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 08:10:41 by rbutarbu          #+#    #+#             */
/*   Updated: 2022/08/03 12:08:33 by rbutarbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    void    *ptr;

    ptr = (void*)malloc(count * size)
    if (!ptr)
        return (NULL);
    ft_bzero(ptr, count);
    return(ptr);
}