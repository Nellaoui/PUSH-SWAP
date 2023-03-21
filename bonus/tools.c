/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelallao <nelallao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 20:18:19 by nelallao          #+#    #+#             */
/*   Updated: 2023/03/21 15:24:22 by nelallao         ###   ########.fr       */
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
		if (result >= INT_MAX)
			ft_error();
		i++;
	}
	return (result * signe);
}

int	ft_check_sorted(t_a_stack *stack_a)
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

void	ft_instruction(char *str, t_a_stack *stack_a, t_b_stack *stack_b)
{
	if (ft_strncmp("sa\n", str, 4) == 0)
		ft_sa_a(stack_a);
	else if (ft_strncmp("sb\n", str, 4) == 0)
		ft_sb_a(stack_b);
	else if (ft_strncmp("ss\n", str, 4) == 0)
		ft_ss_a(stack_a, stack_b);
	else if (ft_strncmp("pa\n", str, 4) == 0)
		ft_pa_a(stack_a, stack_b);
	else if (ft_strncmp("pb\n", str, 4) == 0)
		ft_pb_a(stack_a, stack_b);
	else if (ft_strncmp("ra\n", str, 4) == 0)
		ft_ra_a(stack_a);
	else if (ft_strncmp("rb\n", str, 4) == 0)
		ft_rb_a(stack_b);
	else if (ft_strncmp("rr\n", str, 4) == 0)
		ft_rr_a(stack_a, stack_b);
	else if (ft_strncmp("rra\n", str, 5) == 0)
		ft_rra_a(stack_a);
	else if (ft_strncmp("rrb\n", str, 5) == 0)
		ft_rrb_a(stack_b);
	else if (ft_strncmp("rrr\n", str, 5) == 0)
		ft_rrr_a(stack_a, stack_b);
	else
		ft_error();
}

void	ft_free_checker(char **nbr, t_a_stack *stack_a, t_b_stack *stack_b)
{
	int	i;
	int	j;

	j = stack_a->top;
	i = 0;
	while (i < j)
	{
		free(nbr[i]);
		i++;
	}
	free(nbr);
	free(stack_a->data);
	free(stack_b->data);
}

void	ft_rrr_a(t_a_stack *stack_a, t_b_stack *stack_b)
{
	int	i;
	int	j;
	int	store_b;
	int	store_a;

	i = 0;
	j = 0;
	if (stack_a->top == -1 || stack_b->top == -1)
		write(2, "Error\n", 6);
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
}
