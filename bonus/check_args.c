/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelallao <nelallao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 20:19:02 by nelallao          #+#    #+#             */
/*   Updated: 2023/03/21 13:47:28 by nelallao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
		return (0);
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

int	ft_check_empty(char *numbers)
{
	int	i;

	i = 0;
	if (numbers[0] == '\0')
		return (0);
	while (numbers[i])
	{
		if (numbers[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_number(char **numbers)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (numbers[i])
	{
		if (!ft_isnumber(numbers[i]) || !ft_check_sign(numbers[i]))
			return (0);
		i++;
	}
	return (1);
}

int	ft_isnumber(char *numbers)
{
	int	i;

	i = 0;
	if (numbers[i] == '+' || numbers[i] == '-')
	{
		i++;
		if (numbers[i] == '\0')
			return (0);
	}
	while (numbers[i])
	{
		if (!ft_isdigit(numbers[i])
			&& !(numbers[i] == ' ') && !ft_sign(numbers[i]))
			return (0);
		else if (numbers[ft_strlen(numbers) - 1] == '-'
			|| numbers[ft_strlen(numbers) - 1] == '+')
			return (0);
		if (numbers[i] == '+' || numbers[i] == '-' )
			return (0);
		i++;
	}
	return (1);
}
