/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelallao <nelallao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:49:47 by nelallao          #+#    #+#             */
/*   Updated: 2022/10/20 22:53:16 by nelallao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*/
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*dest;
	unsigned int	l_s;
	size_t			i;

	if (!s)
		return (NULL);
	l_s = ft_strlen(s);
	if (start >= l_s)
		return (ft_strdup(""));
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (dest == 0)
		return (NULL);
	i = 0;
	while (s[i] && len > i)
	{
		dest[i] = s[i + start];
		i++;
	}
	dest[len] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char	src[];
	int		m;
	int		n;
	char	*dest;

	src[] = "substr function Implementation";
	m = 7;
	n = 12;
	dest = ft_substr(src, m, n);
	printf("%s\n", dest);
	return (0);
}
*/