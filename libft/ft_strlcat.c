/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelallao <nelallao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:50:58 by nelallao          #+#    #+#             */
/*   Updated: 2022/10/07 23:06:02 by nelallao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *destination, const char *source, size_t dstsize)
{
	size_t	start;
	size_t	l_dest;
	size_t	l_src;
	size_t	end;

	l_src = ft_strlen(source);
	if (dstsize == 0)
		return (l_src);
	l_dest = ft_strlen(destination);
	start = 0;
	end = l_dest;
	if (l_dest >= dstsize)
		return (l_src + dstsize);
	while (source[start] != '\0' && end < dstsize - 1)
	{
		destination[end] = source[start];
		end++;
		start++;
	}
	destination[end] = '\0';
	return (l_dest + l_src);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	first[];
	char	last[];
    int r;
	int		size;
    char buffer[size];

    first[] = "This is ";
    last[] = "a potentially long string";
    size = 16;
    r = ft_strlcat(buffer,last,size);
    puts(buffer);
    printf("Value returned: %d\n",r);
    if( r > size )
        puts("String truncated");
    else
        puts("String was fully copied");
    return(0);
}
*/