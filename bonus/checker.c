/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelallao <nelallao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 00:10:04 by nelallao          #+#    #+#             */
/*   Updated: 2023/03/21 16:29:39 by nelallao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	int			i;
	char		**numbers;	
	char		*str;
	t_a_stack	stacka;
	t_b_stack	stackb;

	numbers = ft_trait_numbers(av, ac);
	i = ft_counter(numbers);
	stacka.data = malloc(sizeof(int) * i + 1);
	stackb.data = malloc(sizeof(int) * i + 1);
	ft_norm(&stacka, &stackb);
	while (i-- > 0)
		ft_push_a(ft_atoi_a(numbers[i]), &stacka);
	while (1)
	{
		str = get_next_line(0);
		if (!str)
			break ;
		ft_instruction(str, &stacka, &stackb);
	}
	if (ft_check_sorted(&stacka))
		ft_putstr_fd("OK\n", 1);
	else
		ft_putstr_fd("KO\n", 1);
	ft_free_checker(numbers, &stacka, &stackb);
}

void	ft_norm(t_a_stack *stack_a, t_b_stack *stack_b)
{
	stack_a->top = -1;
	stack_b->top = -1;
}
