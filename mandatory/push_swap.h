/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelallao <nelallao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 15:07:48 by nelallao          #+#    #+#             */
/*   Updated: 2023/03/21 16:24:57 by nelallao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

typedef struct stack_a
{
	int	*data;
	int	top;
}	t_a_stack;

typedef struct stack_b
{
	int	*data;
	int	top;
}	t_b_stack;

/*-------------------------------------------------*/
char	**ft_trait_numbers(char **av, int ac);
int		ft_check_empty(char *numbers);
void	ft_error(void);
int		ft_isalpha_c(char n);
int		ft_count_numbers(char **numbers);
void	ft_hundling_errors(char **numbers);
int		ft_counter(char **numbers);
int		ft_check_number(char **numbers);
int		ft_check_handling(char **numbers);
int		ft_isnumber(char *numbers);
long	ft_atoi_a(const char *str);
void	ft_push_a(int element, t_a_stack *stack);
int		ft_check_stack_sorted(t_a_stack *stack_a);
void	ft_sorting(t_a_stack *stack_a, int i, t_b_stack *stack_b);
int		*ft_duplicate_stack_a(t_a_stack *stack_a);
int		*ft_bubblesort(int *numbers, int size);
int		*ft_short_dup(int size, int *numbers);
void	ft_free(char **numbers, int j, t_a_stack *stack_a, t_b_stack *stack_b);
void	ft_ranking(int *sorted, int size, t_a_stack *stack_a);
void	ft_fast_triple_sort(t_a_stack *stack_a);
void	ft_fast_five_sort(t_a_stack *stack_a, t_b_stack *stack_b);
void	ft_range_sort(t_a_stack *stack_a, t_b_stack *stack_b);
void	ft_sort_big(t_a_stack *stack_a, t_b_stack *stack_b);
void	ft_push_back(t_a_stack *stack_a, t_b_stack *stack_b);
void	ft_sb(t_b_stack *stack);
void	ft_sa(t_a_stack *stack);
void	ft_ss(t_a_stack *stack_a, t_b_stack *stack_b);
void	ft_pa(t_a_stack *stack_a, t_b_stack *stack_b);
void	ft_pb(t_a_stack *stack_a, t_b_stack *stack_b);
void	ft_ra(t_a_stack *stack);
void	ft_rb(t_b_stack *stack);
void	ft_rr(t_a_stack *stack_a, t_b_stack *stack_b);
void	ft_rra(t_a_stack *stack);
void	ft_rrb(t_b_stack *stack);
void	ft_rrr(t_a_stack *stack_a, t_b_stack *stack_b);
int		ft_sign(int n);
int		ft_check_double(char **numbers);
void	ft_rrr_a(t_a_stack *stack_a, t_b_stack *stack_b);

#endif