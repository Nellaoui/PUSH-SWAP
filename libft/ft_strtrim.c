/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelallao <nelallao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:03:25 by nelallao          #+#    #+#             */
/*   Updated: 2022/10/10 22:06:01 by nelallao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	found(char c, char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		length;
	char	*dest;
	size_t	i;

	if (s1 == 0)
		return (NULL);
	length = ft_strlen(s1);
	i = 0;
	while (found(s1[i], (char *)set))
		i++;
	if (!s1[i])
		return (ft_strdup(""));
	while (found(s1[length - 1], (char *)set))
		length--;
	dest = (char *)malloc(sizeof(char) * ((length - i) + 1));
	if (!dest)
		return (NULL);
	ft_memmove(dest, &s1[i], length - i);
	dest[length - i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*s1;
	char	*ret;

    s1 = "    \t  \t \t \t \t \n \n \t\t\n  ";
    ret = ft_strtrim(s1, " \t\n");
    printf("%s", ret);
}
*/