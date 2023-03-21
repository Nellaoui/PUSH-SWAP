/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelallao <nelallao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:36:03 by nelallao          #+#    #+#             */
/*   Updated: 2022/10/20 18:56:17 by nelallao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s)
	{
		while (*s)
		{
			write(fd, s, 1);
			s++;
		}
	}
}
// #include <fcntl.h>

// int main()
// {
//     int fd;
//     char *s;
//     s = "Thers no man like noaman";
//    // fd = 0;
//     fd = open("noaman.txt", O_CREAT | O_WRONLY, 777);
//     ft_putstr_fd(s, fd);
// }