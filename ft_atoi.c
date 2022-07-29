/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutarbu <rbutarbu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 15:52:28 by rbutarbu          #+#    #+#             */
/*   Updated: 2022/07/28 20:29:40 by rbutarbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int   ft_atoi(const char *str)
{
   int   i;
   int   is_neg;
   int   res;

   if (!str)
      return (0);
   i = 0;
   while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
      i++;
   
   is_neg = (str[i] == '-') ? -1 : 1;
   if (is_neg == -1 || str[i] == '+')
      i++;
   res = 0;
   while (str[i] >= '0' && str[i] <= '9')
      res = (res * 10) + (str[i++] - '0');
   return (res * is_neg);
}