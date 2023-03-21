/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelallao <nelallao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 01:23:19 by nelallao          #+#    #+#             */
/*   Updated: 2023/03/21 01:28:19 by nelallao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "push_swap.h"

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

void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit(EXIT_FAILURE);
}

int	ft_counter(char **numbers)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (numbers[i])
	{
		while (numbers[i][j])
			j++;
		i++;
	}
	return (i);
}

void	ft_push_a(int element, t_a_stack *stack)
{
	stack->top++;
	stack->data[stack->top] = element;
}
