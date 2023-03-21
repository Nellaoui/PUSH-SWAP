/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelallao <nelallao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:56:55 by nelallao          #+#    #+#             */
/*   Updated: 2022/10/22 15:01:51 by nelallao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
STRCMP
RETURNE value
less than 0, if str1 < str2
Grater than 0, if str1 > str2
equal to 0, idf str1 == str2
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while ((str1[i] != '\0' || str2[i] != '\0') && i < n)
	{
		if (str1[i] > str2[i])
			return (1);
		else if (str1[i] < str2[i])
			return (-1);
		i++;
	}
	return (0);
}
// #include <stdio.h>
// int main()
// {
// 	char c[] = "aaa\0hdfhdfh";
// 	char b[] = "aaa\0rgdrhdrh";
// 	printf("%d", ft_strncmp(c, b, 5));
// }
/*
#include <stdio.h>
#include <string.h>

int main () {
   char str1[15] = "AAAAAA";
   char str2[15] = "aa";
   int ret;

   ret = ft_strncmp(0, 0, 1);

   if(ret < 0) 
   {
      printf("str1 is less than str2");
   } else if(ret > 0) 
   {
      printf("str2 is less than str1");
   } else 
   {
      printf("str1 is equal to str2");
   }
   
   return(0);
}
*/