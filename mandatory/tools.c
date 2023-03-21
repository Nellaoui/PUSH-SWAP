/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelallao <nelallao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 20:18:19 by nelallao          #+#    #+#             */
/*   Updated: 2023/03/21 15:50:39 by nelallao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atoi_a(const char *str)
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
		if (result > INT_MAX)
			ft_error();
		i++;
	}
	return (result * signe);
}

int	ft_check_stack_sorted(t_a_stack *stack_a)
{
	int	i;
	int	len;

	i = 0;
	if (stack_a -> top == 0)
		return (1);
	len = stack_a->top;
	while (i < len)
	{
		if (stack_a->data[i] < stack_a->data[i + 1])
		{
			return (0);
		}
		i++;
	}
	return (1);
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

int	*ft_duplicate_stack_a(t_a_stack *stack_a)
{
	int	size;
	int	*ptr;
	int	i;

	i = 0;
	size = stack_a->top + 1;
	ptr = malloc(sizeof(int) * size + 1);
	if (!ptr)
		return (0);
	while (i <= size)
	{
		ptr[i] = stack_a->data[i];
		i++;
	}
	return (ptr);
}

void	ft_sort_big(t_a_stack *stack_a, t_b_stack *stack_b)
{
	int	i;

	i = 0;
	while (stack_a->top + 1)
	{
		if (stack_a->data[stack_a->top] <= i)
		{
			ft_pb(stack_a, stack_b);
			ft_rb(stack_b);
			i++;
		}
		else if (stack_a->data[stack_a->top] < (30 + i)
			&& stack_a->data[stack_a->top] > i)
		{
			ft_pb(stack_a, stack_b);
			i++;
		}
		else
			ft_ra(stack_a);
	}
}
