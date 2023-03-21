/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelallao <nelallao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:24:41 by nelallao          #+#    #+#             */
/*   Updated: 2023/03/20 21:56:54 by nelallao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdlib.h>
// #include <string.h>

/*
1s thing is to do allocate words with counting them
2nd is knwo what is eche words lengght
3rd allocate what we did
4th is move all to the meme

*/
#include "libft.h"

static int	counter(const char *s, char c)
{
	int	i;
	int	n;

	n = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			while (s[i] && s[i] != c)
				i++;
			n++;
		}
	}
	return (n);
}

static int	w_len(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	**ft_split(char *s, char c)
{
	char	**dest;
	int		j;
	int		k;

	dest = (char **)ft_calloc((counter(s, c) + 1), (sizeof(char *)));
	if (!dest)
		return (0);
	j = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			dest[j] = (char *)malloc((w_len(s, c) + 1) * (sizeof(char)));
			if (!dest[j])
				return (0);
			k = 0;
			while (*s && *s != c)
				dest[j][k++] = *s++;
			dest[j++][k] = '\0';
		}
	}
	dest[j] = 0;
	return (dest);
}

// #include <stdio.h>

// int main()
// {
// 	char **tab;
// 	int i;

// 	tab = ft_split("          eijrq   ewnfq n eqwr qw  ",  ' ');
// 	i = 0;
// 	while(i < 5)
// 	{
// 	printf("tab[%zu] = %s\n", i, tab[i]);
// 	i++;
// 	}
// 	return (0);
// }
