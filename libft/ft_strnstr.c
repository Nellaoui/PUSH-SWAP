/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelallao <nelallao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:03:58 by nelallao          #+#    #+#             */
/*   Updated: 2022/10/20 22:43:22 by nelallao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!haystack && len == 0)
		return (0);
	i = 0;
	if (needle[i] == '\0')
		return ((char *)(haystack));
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < len && needle[j])
			j++;
		if (needle[j] == '\0')
			return ((char *)haystack + i);
		i++;
	}
	return (0);
}
//  #include <stdio.h>
//  #include <string.h>

//  int main () {

//     char haystack[20] = "TutorialsPoinsPoint";

//     char needle[10] = "Point";

//     char *ret;

//     ret = ft_strnstr(haystack, needle, 22);

//     printf("The substring is: %s\n", ret);

//     return(0);

//  }