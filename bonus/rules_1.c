/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelallao <nelallao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 15:07:59 by nelallao          #+#    #+#             */
/*   Updated: 2023/03/21 15:20:30 by nelallao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sb_a(t_b_stack *stack)
{
	int	store;

	store = stack->data[stack->top];
	stack->data[stack->top] = stack->data[stack-> top - 1];
	stack->data[stack-> top - 1] = store;
}

void	ft_sa_a(t_a_stack *stack)
{
	int	store;

	store = stack->data[stack->top];
	stack->data[stack->top] = stack->data[stack-> top - 1];
	stack->data[stack->top - 1] = store;
}

void	ft_ss_a(t_a_stack *stack_a, t_b_stack *stack_b)
{
	int	store;

	store = stack_a->data[stack_a->top];
	stack_a->data[stack_a->top] = stack_a->data[stack_a-> top -1];
	stack_a->data[stack_a-> top - 1] = store;
	store = stack_b->data[stack_b->top];
	stack_b->data[stack_b->top] = stack_b->data[stack_b-> top -1];
	stack_b->data[stack_b-> top - 1] = store;
}

void	ft_pa_a(t_a_stack *stack_a, t_b_stack *stack_b)
{
	if (stack_b->top < 0)
		ft_error();
	stack_a->top++;
	stack_a->data[stack_a->top] = stack_b->data[stack_b->top];
	stack_b->top--;
}

void	ft_pb_a(t_a_stack *stack_a, t_b_stack *stack_b)
{
	stack_b->data[++stack_b->top] = stack_a->data[stack_a->top];
	stack_a->data[stack_a->top] = 0;
	stack_a->top--;
}
