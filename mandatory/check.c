/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelallao <nelallao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 19:45:32 by nelallao          #+#    #+#             */
/*   Updated: 2023/03/19 23:26:40 by nelallao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "push_swap.h"

void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit(EXIT_FAILURE);
}

int	ft_sign(int n)
{
	if (n == '+' || n == '-')
		return (1);
	return (0);
}

int	ft_check_sign(char *numbers)
{
	int	i;

	i = 0;
	while (numbers[i])
	{		
		if (numbers[i] == '-' && numbers[i] == '+')
		{
			i++;
			while (numbers[i])
			{
				if (numbers[i] == '-' || numbers[i] == '+')
					return (0);
				i++;
			}
		}
		i++;
	}
	return (1);
}

int	ft_isnumber(char *numbers)
{
	int	i;

	i = 0;
	if (numbers[i] == '+' || numbers[i] == '-')
	{
		i++;
		if (numbers[i] == '\0')
			return (0);
	}
	while (numbers[i])
	{
		if (!ft_isdigit(numbers[i])
			&& !(numbers[i] == ' ') && !ft_sign(numbers[i]))
			return (0);
		else if (numbers[ft_strlen(numbers) - 1] == '-'
			|| numbers[ft_strlen(numbers) - 1] == '+')
			return (0);
		if (numbers[i] == '+' || numbers[i] == '-' )
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_number(char **numbers)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (numbers[i])
	{
		if (!ft_isnumber(numbers[i]) || !ft_check_sign(numbers[i]))
			return (0);
		i++;
	}
	return (1);
}
