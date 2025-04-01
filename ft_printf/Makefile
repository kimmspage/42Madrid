# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kimberlydungaya <kimberlydungaya@studen    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/15 08:34:28 by kimberlydun       #+#    #+#              #
#    Updated: 2025/04/02 01:36:17 by kimberlydun      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c \
       ft_printf_utils_numbers.c \
       ft_printf_utils_pointers.c \
       ft_printf_utils_strings.c

OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
    @ar -rcs $(NAME) $(OBJS)

%.o: %.c
    @$(CC) $(CFLAGS) -c $< -o $@

clean:
    @rm -f $(OBJS)

fclean: clean
    @rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re