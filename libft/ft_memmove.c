/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelallao <nelallao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 18:25:43 by nelallao          #+#    #+#             */
/*   Updated: 2022/10/21 20:12:41 by nelallao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
copies n charchter from in a reverse waay to  pass overlap
*/
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;
	size_t				i;

	if (dest == NULL && src == NULL)
		return (0);
	s = (const unsigned char *)src;
	d = (unsigned char *)dest;
	i = 0;
	if (d > s)
	{
		while (n--)
			d[n] = s[n];
	}
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
char	arr[20] = "Aticleworld";
char	arr1[10] = "amlendra";
printf("%s", ft_memmove(arr, arr1, 5));
}
*/
