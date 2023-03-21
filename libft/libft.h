/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelallao <nelallao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:30:54 by nelallao          #+#    #+#             */
/*   Updated: 2023/03/18 20:10:50 by nelallao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 ifndef Returns true if this macro is not defined.
 define substitution tool and it instructs the compiler to do.
#endif // Ends preprocessor conditional.
libft/libft.h
*/
#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strchr(const char *scanned, int searched);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strrchr(const char *s, int c);
char	**ft_split(char *s, char c);
char	*ft_strdup(const char *s1);
char	*ft_itoa(int n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
long	ft_atoi(const char *str);
int		ft_isdigit(int n);
int		ft_isascii(int n);
int		ft_isalpha(int n);
int		ft_isprint(int c);
int		ft_isalnum(int n);
int		ft_toupper(int c);
int		ft_tolower(int c);
size_t	ft_strlcpy(char *destination, const char *source, size_t dstsize);
size_t	ft_strlcat(char *destination, const char *source, size_t dstsize);
size_t	ft_strlen(const char *str);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	*ft_memset(void *str, int c, size_t n);
void	*ft_calloc(size_t count, size_t size);
void	*ft_calloc(size_t count, size_t size);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	*ft_bzero(void *str, size_t n);
void	ft_putnbr_fd(int n, int fd);

void	*ft_memchr(const void *s, int c, size_t n);

#endif
