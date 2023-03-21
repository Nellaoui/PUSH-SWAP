/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelallao <nelallao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:58:00 by nelallao          #+#    #+#             */
/*   Updated: 2022/10/21 19:45:32 by nelallao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s)
	{
		write(fd, s, ft_strlen(s));
		write(fd, "\n", 1);
	}
}
// #include <fcntl.h>
// #include <stdio.h>
// int main()
// {
// int fd;
// char *s = "Heloo noaman";
// fd = creat("c.txt", O_RDWR);
// ft_putendl_fd(s, fd);
// }