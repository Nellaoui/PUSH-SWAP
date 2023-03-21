/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelallao <nelallao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 21:29:23 by nelallao          #+#    #+#             */
/*   Updated: 2022/10/21 19:05:54 by nelallao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    *p++ = (unsigned char)c; // casting
*/
#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*p;

	p = str;
	while (n--)
		*p++ = (unsigned char)c;
	return (str);
}
/*
#include <stdio.h>	
int	main()
{
	char	arr[20];

    arr[20] = "Hello World";
    ft_memset(arr, '$', 2);
    printf("%s\n", arr);
}
*/