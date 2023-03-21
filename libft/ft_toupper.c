/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelallao <nelallao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:59:25 by nelallao          #+#    #+#             */
/*   Updated: 2022/10/05 21:29:07 by nelallao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The	toupper(void) 
function is used to convert lowercase alphabet to uppercase
*/

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*
#include <ctype.h>
#include <stdio.h>
int	main(void)
{
	printf("%d \n", toupper('S'));
	printf("%d\n", ft_toupper('S'));
}
*/