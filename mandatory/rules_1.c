/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelallao <nelallao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 15:07:59 by nelallao          #+#    #+#             */
/*   Updated: 2023/03/19 23:16:06 by nelallao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sb(t_b_stack *stack)
{
	int	store;

	store = stack->data[stack->top];
	stack->data[stack->top] = stack->data[stack-> top - 1];
	stack->data[stack-> top - 1] = store;
	write(1, "sb\n", 3);
}

void	ft_sa(t_a_stack *stack)
{
	int	store;

	store = stack->data[stack->top];
	stack->data[stack->top] = stack->data[stack-> top - 1];
	stack->data[stack->top - 1] = store;
	write(1, "sa\n", 3);
}

void	ft_ss(t_a_stack *stack_a, t_b_stack *stack_b)
{
	int	store;

	store = stack_a->data[stack_a->top];
	stack_a->data[stack_a->top] = stack_a->data[stack_a-> top -1];
	stack_a->data[stack_a-> top - 1] = store;
	store = stack_b->data[stack_b->top];
	stack_b->data[stack_b->top] = stack_b->data[stack_b-> top -1];
	stack_b->data[stack_b-> top - 1] = store;
	write(1, "ss\n", 3);
}

void	ft_pa(t_a_stack *stack_a, t_b_stack *stack_b)
{
	if (stack_b->top < 0)
		ft_error();
	stack_a->top++;
	stack_a->data[stack_a->top] = stack_b->data[stack_b->top];
	stack_b->top--;
	write(1, "pa\n", 3);
}

void	ft_pb(t_a_stack *stack_a, t_b_stack *stack_b)
{
	stack_b->data[++stack_b->top] = stack_a->data[stack_a->top];
	stack_a->top--;
	write(1, "pb\n", 3);
}
