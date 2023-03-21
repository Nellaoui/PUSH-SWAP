/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelallao <nelallao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:36:28 by nelallao          #+#    #+#             */
/*   Updated: 2022/10/05 17:49:54 by nelallao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	end;

	end = ft_strlen(s);
	while (end >= 0)
	{
		if (s[end] == (char)c)
			return ((char *)s + end);
		end--;
	}
	return (0);
}
/*
int	main(void)
{
	char	denom[];
	char	first;

 
    // initializing the denomination
    denom[] = "Rs 10000000";
 
    // Printing original string
    printf("The original string is : %s", denom);
 
    // initializing the initial number
    first = '1';
    char* entire;
 
    // Use of strrchr()
    // returns entire number
    entire = ft_strrchr(denom, first);
 
    printf("\nThe denomination value is : %s ", entire);
 
    return (0);
}
*/