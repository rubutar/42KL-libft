/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutarbu <rbutarbu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 13:05:24 by rbutarbu          #+#    #+#             */
/*   Updated: 2022/07/12 13:05:24 by rbutarbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>


// char    *ft_strnstr(const char *big, const char *little, size_t len)
// {
//     size_t  i;
//     size_t  j;

//     if (!haystack || !needle)
// 		return (NULL);
// 	if (!needle || !needle[0])
// 		return ((char*)haystack);
// 	i = 0;
// 	while (haystack[i] && i < len)
// 	{
// 		j = 0;
// 		while (haystack[i + j] && needle[j] &&
// 				i + j < len && haystack[i + j] == needle[j])
// 			j++;
// 		if (!needle[j])
// 			return ((char*)(haystack + i));
// 		i++;
// 	}
// 	return (NULL);

// }


int main(void) 
{
    char *searchingFor = "stackdummy";
    char *in = "la da\ndoo a da\nnow here comes the stack\nok there it was.\n";

    printf("found: %s\n", strnstr(in, searchingFor, 5) ? "yes" : "no");
    printf("found: %s\n", strnstr(in, searchingFor, 5) ? "yes" : "no");
    printf("found: %s\n", strnstr(in, searchingFor, 5) ? "yes" : "no");
}