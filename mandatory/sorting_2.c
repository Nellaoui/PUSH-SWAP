/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelallao <nelallao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 20:19:02 by nelallao          #+#    #+#             */
/*   Updated: 2023/03/21 15:36:06 by nelallao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_range_sort(t_a_stack *stack_a, t_b_stack *stack_b)
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
		else if (stack_a->data[stack_a->top] < (15 + i)
			&& stack_a->data[stack_a->top] > i)
		{
			ft_pb(stack_a, stack_b);
			i++;
		}
		else
			ft_ra(stack_a);
	}	
}

void	ft_ranking(int *sorted, int size, t_a_stack *stack_a)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (stack_a->data[i] != sorted[j] && j < size)
			j++;
		if (sorted[j] == stack_a->data[i])
			stack_a->data[i] = j;
		i++;
	}
}

int	*ft_bubblesort(int *numbers, int size)
{
	int	i;
	int	j;
	int	*str;
	int	tmp;

	i = 0;
	str = ft_short_dup(size, numbers);
	while (i < size)
	{
		j = 0;
		while (j < size - 1)
		{
			if (str[j] > str[j + 1])
			{
				tmp = str[j];
				str[j] = str[j + 1];
				str[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
	return (str);
}

void	ft_hundling_errors(char **numbers)
{
	if (!ft_check_number(numbers) || !ft_check_handling(numbers)
		|| !ft_check_double(numbers))
		ft_error();
}

char	**ft_trait_numbers(char **av, int ac)
{
	int		i;
	char	**numbers;
	char	*str;

	if (ac == 1)
		exit (EXIT_SUCCESS);
	i = 1;
	str = ft_strdup(" ");
	while (i < ac)
	{
		if (ft_check_empty(av[i]))
			ft_error();
		str = ft_strjoin(str, " ");
		str = ft_strjoin(str, av[i]);
		i++;
	}
	numbers = ft_split(str, ' ');
	free(str);
	ft_hundling_errors(numbers);
	return (numbers);
}
