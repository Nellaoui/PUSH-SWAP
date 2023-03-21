/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelallao <nelallao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 09:02:24 by nelallao          #+#    #+#             */
/*   Updated: 2022/10/05 22:25:25 by nelallao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
According to Wikipedia, strlcpy returns strlen(src)
(the actual length of the string), not the number of bytes copied.
 Hence, you need to keep counting 
the characters in src until you hit '\0', even if it exceeds len.
// dstsiz -1 for let the place to put \0
	{*/
#include "libft.h"

size_t	ft_strlcpy(char *destination, const char *source, size_t dstsize)
{
	size_t	i;
	size_t	l;

	i = 0;
	l = ft_strlen(source);
	while (source[i] != '\0' && i < dstsize - 1 && dstsize != '\0')
	{
		destination[i] = source[i];
		i++;
	}
	if (dstsize)
		destination[i] = '\0';
	return (l);
}

/*
#include <stdio.h>

void	test(int size)
{
	char	arr[];
    char buffer[19];
    int r;

    arr[] = "Hello There, noaman";
    
    r = ft_strlcpy(buffer, arr, size);
    printf("copied '%s' into '%s', lentgh %d\n ,", arr, buffer, r);
}
int main ()
{
    test(19);
    test(10);
    test(1);
    test(0);
    return (0);
}
*/