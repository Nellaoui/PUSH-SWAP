/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelallao <nelallao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 15:07:48 by nelallao          #+#    #+#             */
/*   Updated: 2023/03/21 16:25:26 by nelallao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include "Get-next-line/get_next_line.h"

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
long	ft_atoi_a(const char *str);
void	ft_hundling_errors(char **numbers);
int		ft_check_empty(char *numbers);
int		ft_check_number(char **numbers);
int		ft_isnumber(char *numbers);
int		ft_sign(int n);
int		ft_check_sign(char *numbers);
void	ft_error(void);
int		ft_counter(char **numbers);
void	ft_push_a(int element, t_a_stack *stack);
int		ft_check_sorted(t_a_stack *stack_a);
void	ft_instruction(char *str, t_a_stack *stack_a, t_b_stack *stack_b);
void	ft_free_checker(char **nbr, t_a_stack *stack_a, t_b_stack *stack_b);
int		ft_check_handling(char **numbers);
int		ft_check_double(char **numbers);

void	ft_sb_a(t_b_stack *stack);
void	ft_sa_a(t_a_stack *stack);
void	ft_ss_a(t_a_stack *stack_a, t_b_stack *stack_b);
void	ft_pa_a(t_a_stack *stack_a, t_b_stack *stack_b);
void	ft_pb_a(t_a_stack *stack_a, t_b_stack *stack_b);
void	ft_ra_a(t_a_stack *stack);
void	ft_rb_a(t_b_stack *stack);
void	ft_rr_a(t_a_stack *stack_a, t_b_stack *stack_b);
void	ft_rra_a(t_a_stack *stack);
void	ft_rrb_a(t_b_stack *stack);
void	ft_rrr_a(t_a_stack *stack_a, t_b_stack *stack_b);
void	ft_norm(t_a_stack *stack_a, t_b_stack *stack_b);

/*-------------------------------------------------*/

#endif