/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelallao <nelallao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 20:18:51 by nelallao          #+#    #+#             */
/*   Updated: 2023/03/21 00:48:08 by nelallao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sorting(t_a_stack *stack_a, int i, t_b_stack *stack_b)
{
	int	*sorted;
	int	*duplicate;

	duplicate = ft_duplicate_stack_a(stack_a);
	sorted = ft_bubblesort(duplicate, i);
	ft_ranking(sorted, i, stack_a);
	if (i == 2)
		ft_sa(stack_a);
	else if (i == 3)
		ft_fast_triple_sort(stack_a);
	else if (i == 5)
		ft_fast_five_sort(stack_a, stack_b);
	else if (i < 101)
		ft_range_sort(stack_a, stack_b);
	else
		ft_sort_big(stack_a, stack_b);
	ft_push_back(stack_a, stack_b);
	free(duplicate);
	free(sorted);
}

void	ft_fast_five_sort(t_a_stack *stack_a, t_b_stack *stack_b)
{
	while (stack_a->data[stack_a->top] < 3)
		ft_ra(stack_a);
	ft_pb(stack_a, stack_b);
	while (stack_a->data[stack_a->top] < 3)
		ft_ra(stack_a);
	ft_pb(stack_a, stack_b);
	if (stack_b->data[stack_b->top] > stack_b->data[stack_b->top - 1])
		ft_sb(stack_b);
	ft_fast_triple_sort(stack_a);
	ft_pa(stack_a, stack_b);
	ft_ra(stack_a);
	ft_pa(stack_a, stack_b);
	ft_ra(stack_a);
}

void	ft_fast_triple_sort(t_a_stack *stack_a)
{
	if (!(stack_a->data[0] == 2))
	{
		if (stack_a->data[0] == 1)
		{
			ft_rra(stack_a);
			if (stack_a->data[0] == 0)
				ft_rra(stack_a);
		}
		else
		{
			ft_ra(stack_a);
			if (stack_a->data[0] == 1)
				ft_ra(stack_a);
		}
	}
	if (stack_a->data[stack_a->top] > stack_a->data[stack_a->top - 1])
		ft_sa(stack_a);
}

void	ft_push_back(t_a_stack *stack_a, t_b_stack *stack_b)
{
	int	i;

	while ((stack_b->top + 1) != 0)
	{
		i = 0;
		while (stack_b->data[i] != stack_b->top)
			i++;
		if (i < stack_b->top / 2)
		{
			while (stack_b->data[stack_b->top] != stack_b->top)
				ft_rrb(stack_b);
			ft_pa(stack_a, stack_b);
		}
		if (i >= stack_b->top / 2)
		{
			while (stack_b->data[stack_b->top] != stack_b->top)
				ft_rb(stack_b);
			ft_pa(stack_a, stack_b);
		}
	}
}
