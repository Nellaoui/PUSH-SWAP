/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args_3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelallao <nelallao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 13:06:44 by nelallao          #+#    #+#             */
/*   Updated: 2023/03/21 16:11:40 by nelallao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_handling(char **numbers)
{
	int	i;

	i = 0;
	while (numbers[i])
	{
		if (ft_atoi_a(numbers[i]) >= INT_MAX
			|| ft_atoi_a(numbers[i]) <= INT_MIN)
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_double(char **numbers)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (numbers[i])
	{
		j = i + 1;
		while (numbers[j])
		{
			if (ft_atoi(numbers[i]) == ft_atoi(numbers[j]))
				return (0);
			else
				j++;
		}
		i++;
	}
	return (1);
}
