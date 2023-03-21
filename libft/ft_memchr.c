/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelallao <nelallao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:48:00 by nelallao          #+#    #+#             */
/*   Updated: 2022/10/21 18:05:45 by nelallao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The C library function void 
*memchr(const void *str, int c, size_t n) searches for 
*/
/*
searching character ‘c’ in the given string “Aticleworld”.
 The memchr function starts searching from the first character ‘A’.
 to the given number of bytes (array size).
  When it will find the ‘c’ it returns the address of character ‘c’.
*/
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s + i) == (unsigned char)c)
			return ((void *)s + i);
		i++;
	}
	return (0);
}
