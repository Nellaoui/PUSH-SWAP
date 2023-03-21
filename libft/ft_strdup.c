/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelallao <nelallao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:32:53 by nelallao          #+#    #+#             */
/*   Updated: 2022/10/21 16:39:10 by nelallao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
save a copy of a string

The function strdup() is used to duplicate a string. It returns a pointer to 
    null-terminated byte string

1st thing  => Allocate memory for duplicate 
2nd thing  => Copy string 
	//    Duplicate for the address of dup (the duplicate string) is retained
*/

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		size;
	char	*dup;
	char	*duplicate;

	size = ft_strlen(s1);
	dup = (char *)malloc(sizeof(char) * size + 1);
	if (!dup)
		return (NULL);
	duplicate = dup;
	while (*s1)
	{
		*duplicate = *s1;
		duplicate++;
		s1++;
	}
	*duplicate = '\0';
	return (dup);
}
/*
#include <stdio.h>
int	main(void)
{
	char	original[12];
    char *duplicate;

    original[12] = "Ooga Booga!";
    int o_len,d_len;
    duplicate = ft_strdup(original);
    o_len = ft_strlen(original);
    d_len = ft_strlen(duplicate);
    printf("Original String: '%s' (%d)\n",
            original,o_len);
    printf("Duplicate string: '%s' (%d)\n",
            duplicate,d_len);
    return(0);
}
*/