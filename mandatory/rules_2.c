/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelallao <nelallao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 15:07:57 by nelallao          #+#    #+#             */
/*   Updated: 2023/03/19 23:25:54 by nelallao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_a_stack *stack)
{
	int	i;
	int	tmp;

	i = stack->top;
	tmp = stack->data[i];
	while (i > 0)
	{
		stack->data[i] = stack->data[i - 1];
		i--;
	}
	stack->data[0] = tmp;
	write(1, "ra\n", 3);
}

void	ft_rb(t_b_stack *stack)
{
	int	i;
	int	tmp;

	i = stack->top;
	tmp = stack->data[stack->top];
	while (i > 0)
	{
		stack->data[i] = stack->data[i - 1];
		i--;
	}
	stack->data[0] = tmp;
	write(1, "rb\n", 3);
}

void	ft_rr(t_a_stack *stack_a, t_b_stack *stack_b)
{
	int	i;
	int	j;
	int	tmp;
	int	tmp2;

	i = stack_a->top;
	j = stack_b->top;
	tmp = stack_a->data[i];
	while (i > 0)
	{
		stack_a->data[i] = stack_a->data[i - 1];
		i--;
	}
	stack_a->data[0] = tmp;
	tmp2 = stack_b->data[j];
	while (j > 0)
	{
		stack_b->data[j] = stack_b->data[j - 1];
		j--;
	}
	stack_b->data[0] = tmp;
	write(1, "rr\n", 1);
}

void	ft_rra(t_a_stack *stack)
{
	int	i;
	int	store;

	i = 0;
	if (stack->top == -1)
		ft_error();
	store = stack->data[i];
	while (i <= stack->top)
	{
		stack->data[i] = stack->data[i + 1];
		i++;
	}
	stack->data[i - 1] = store;
	write(1, "rra\n", 4);
}

void	ft_rrb(t_b_stack *stack)
{
	int	i;
	int	store;

	i = 0;
	store = stack->data[i];
	while (i <= stack->top)
	{
		stack->data[i] = stack->data[i + 1];
		i++;
	}
	stack->data[i - 1] = store;
	write(1, "rrb\n", 4);
}
