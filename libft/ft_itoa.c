/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelallao <nelallao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 22:10:26 by nelallao          #+#    #+#             */
/*   Updated: 2022/10/21 16:33:49 by nelallao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
1s inr range 
2nd turn minus to positive 
3rd allocate
4rd use stack
5th retun to minus if is nigga
*/
#include "libft.h"

static int	niggative(int *n)
{
	if (*n < 0)
	{
		*n = *n * (-1);
		return (1);
	}
	return (0);
}

static int	counter(int n)
{
	int	i;

	if (n == 0)
		return (1);
	i = 0;
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*dest;
	int		minus;
	int		len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	minus = niggative(&n);
	len = counter(n) + minus;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	dest[len] = '\0';
	while (len--)
	{
		dest[len] = n % 10 + '0';
		n = n / 10;
	}
	if (minus)
		dest[0] = '-';
	return (dest);
}
// #include <stdio.h>
// int main()
// {
//   printf("%s", ft_itoa(-2147483647));
// }