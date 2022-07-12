/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutarbu <rbutarbu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 08:44:19 by rbutarbu          #+#    #+#             */
/*   Updated: 2022/07/12 08:44:19 by rbutarbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int main()
{
char    str[][5] = {"R2D2", "C3PO", "R2A6"};
int n;
  puts ("Looking for R2 astromech droids...");
  for (n=0 ; n<3 ; n++)
    if (strncmp (str[n],"Rxxx",1) == 0)
    {
      printf ("found %s\n",str[n]);
    }
  return 0;
}