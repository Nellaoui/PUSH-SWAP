# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nelallao <nelallao@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/20 18:37:26 by nelallao          #+#    #+#              #
#    Updated: 2023/03/18 15:52:43 by nelallao         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
SRC = ft_bzero.c ft_isalpha.c ft_isdigit.c ft_memchr.c ft_memcpy.c ft_memset.c ft_itoa.c ft_putstr_fd.c\
ft_strlcat.c ft_strlen.c ft_tolower.c ft_isprint.c ft_strrchr.c ft_toupper.c ft_split.c ft_putendl_fd.c\
ft_isalnum.c ft_isascii.c ft_memmove.c ft_memcmp.c ft_strnstr.c ft_substr.c ft_strtrim.c ft_putchar_fd.c ft_striteri.c\
ft_strchr.c ft_strlcpy.c ft_strncmp.c ft_strjoin.c ft_atoi.c ft_calloc.c ft_strdup.c ft_strmapi.c ft_putnbr_fd.c\

OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
		@ar rc $(NAME) $(OBJ)
%.o: %.c
		@$(CC) $(CFLAGS) -o $@ -c $<

all: $(NAME)

clean:	
		@$(RM) $(OBJ)
fclean: clean
		@$(RM) $(NAME) 

re: fclean all
