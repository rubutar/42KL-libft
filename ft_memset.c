/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutarbu <rbutarbu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 20:10:41 by rbutarbu          #+#    #+#             */
/*   Updated: 2022/08/02 17:45:41 by rbutarbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_memset(void *b, int c, size_t len)
{
    size_t  i;

    if (!b)
        return (NULL);
    i = 0;
    while (i < len)
    {
        *(unsigned char*)(b + i) = (unsigned char)c;
        i++;
    }
    return (b);
}