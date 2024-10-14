# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kimberlydungaya <kimberlydungaya@studen    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/02 01:45:19 by kimberlydun       #+#    #+#              #
#    Updated: 2024/10/15 01:56:15 by kimberlydun      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = libft.a
RM      = rm -f
CC      = cc 
CCFLAGS = -Wall -Werror -Wextra
LIB     = ar rcs
SRC     = $(wild *.c)


OBJ     = $(SRC: -c=.o)

all: $(NAME)

$(NAME:) $(OBJ)
        $(LIB) $(NAME) $(OBJ)

clean:
    $(RM) $(OBJ)

fclean: clean
    $(RM) $(NAME)

re: clean fclean all

.PHONY: all clean clean re