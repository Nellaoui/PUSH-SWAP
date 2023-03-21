/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelallao <nelallao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 12:47:42 by nelallao          #+#    #+#             */
/*   Updated: 2023/03/21 16:28:11 by nelallao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// `.` operator is used to access a member of a structure
// -> perator is used to access a member of a
//  structure through a pointer to the structure.

int	main(int ac, char *av[])
{
	int			i;
	int			j;
	char		**numbers;
	t_a_stack	stacka;
	t_b_stack	stackb;

	i = 1;
	numbers = ft_trait_numbers(av, ac);
	j = ft_counter(numbers);
	stacka.data = malloc(sizeof(int) * j + 1);
	stacka.top = -1;
	stackb.data = malloc(sizeof(int) * j + 1);
	stackb.top = -1;
	i = j - 1;
	while (i >= 0)
	{
		ft_push_a(ft_atoi_a(numbers[i]), &stacka);
		i--;
	}
	if (ft_check_stack_sorted(&stacka))
		return (0);
	ft_sorting(&stacka, j, &stackb);
	ft_free(numbers, j, &stacka, &stackb);
}

void	ft_free(char **numbers, int j, t_a_stack *stack_a, t_b_stack *stack_b)
{
	int	i;

	i = 0;
	while (i < j)
	{
		free(numbers[i]);
		i++;
	}
	free(numbers);
	free(stack_a->data);
	free(stack_b->data);
}
