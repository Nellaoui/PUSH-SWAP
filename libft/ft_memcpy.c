/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelallao <nelallao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:38:03 by nelallao          #+#    #+#             */
/*   Updated: 2022/10/05 19:15:03 by nelallao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
memcpy function, the memcpy_s function also copies n characters from
the source object src to the destination object dest.
this function returns a pointer to destination, which is str1

// const void for dont maniplaute data
 
*/
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;
	size_t				i;

	if (dest == NULL && src == NULL)
		return (0);
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
char	arr[20] = "this is source";
char	arr1[20] = "destinaton";
printf("%s", ft_memcpy(0, 0, 1));
}*/