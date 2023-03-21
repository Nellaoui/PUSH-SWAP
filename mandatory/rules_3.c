/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelallao <nelallao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 15:07:54 by nelallao          #+#    #+#             */
/*   Updated: 2023/03/21 00:14:34 by nelallao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rrr(t_a_stack *stack_a, t_b_stack *stack_b)
{
	int	i;
	int	j;
	int	store_b;
	int	store_a;

	i = 0;
	j = 0;
	if (stack_a->top == -1 || stack_b->top == -1)
		write(1, "Error\n", 1);
	store_a = stack_a->data[i];
	while (i <= stack_a->top)
	{
		stack_a->data[i] = stack_a->data[i + 1];
		i++;
	}
	stack_a->data[i - 1] = store_a;
	store_b = stack_b->data[j];
	while (j <= stack_b->top)
	{
		stack_b->data[j] = stack_b->data[j + 1];
		j++;
	}
	stack_b->data[j - 1] = store_b;
	write(1, "rrr\n", 4);
}

void	ft_push_a(int element, t_a_stack *stack)
{
	stack->top++;
	stack->data[stack->top] = element;
}

int	*ft_short_dup(int size, int *numbers)
{
	int	i;
	int	*str;

	i = 0;
	str = malloc(sizeof(int) * size + 1);
	while (size > i)
	{
		str[i] = numbers[i];
		i++;
	}
	return (str);
}

int	ft_check_alpha(char *numbers)
{
	int	i;

	i = 0;
	while (numbers[i])
	{
		if (ft_isalpha_c(numbers[i]))
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_sort(char **numbers)
{
	int	i;
	int	len;

	i = 0;
	len = ft_count_numbers(numbers);
	while (i < len - 1)
	{
		if (ft_atoi(numbers[i]) > ft_atoi(numbers[i + 1]))
			return (0);
		i++;
	}
	return (1);
}
