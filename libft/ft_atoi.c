/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelallao <nelallao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 19:05:22 by nelallao          #+#    #+#             */
/*   Updated: 2023/03/21 16:18:25 by nelallao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atoi(const char *str)
{
	long	signe;
	long	i;
	long	result;

	signe = 1;
	i = 0;
	result = 0;
	if (str[i] == '-')
	{
		signe = signe * (-1);
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		if (result <= INT_MIN && result >= INT_MAX)
		{
			result = result * 10 + str[i] - '0';
			i++;
		}
		i++;
	}
	return (result * signe);
}
