/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelallao <nelallao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 23:09:03 by nelallao          #+#    #+#             */
/*   Updated: 2023/03/21 16:10:17 by nelallao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_handling(char **numbers)
{
	int	i;

	i = 0;
	while (numbers[i])
	{
		if (ft_atoi_a(numbers[i]) > INT_MAX
			|| ft_atoi_a(numbers[i]) < INT_MIN)
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

int	ft_check_empty(char *numbers)
{
	int	i;

	i = 0;
	if (numbers[0] == '\0')
		ft_error();
	while (numbers[i])
	{
		if (numbers[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}

int	ft_count_numbers(char **numbers)
{
	int	i;

	i = 0;
	while (numbers[i])
		i++;
	return (i);
}

int	ft_isalpha_c(char n)
{
	if ((n >= 'a' && n <= 'z') || (n >= 'A' && n <= 'Z'))
		return (1);
	else
		return (0);
}
